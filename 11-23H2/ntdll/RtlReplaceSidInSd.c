/*
 * XREFs of RtlReplaceSidInSd @ 0x1800F2AB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetOwnerSecurityDescriptor @ 0x18006CA50 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetDaclSecurityDescriptor @ 0x18006CAE0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x18007A360 (RtlGetSaclSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x18007FB10 (RtlGetGroupSecurityDescriptor.c)
 *     memcmp @ 0x180093310 (memcmp.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

NTSTATUS __cdecl RtlReplaceSidInSd(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID OldSid,
        PSID NewSid,
        ULONG *NumChanges)
{
  int v5; // r14d
  unsigned int v7; // r14d
  PSECURITY_DESCRIPTOR v9; // r13
  NTSTATUS result; // eax
  char *v11; // rdi
  int v12; // eax
  int v13; // ecx
  char *v14; // rdi
  int v15; // eax
  int v16; // ecx
  __int64 AceCount; // rsi
  PACL v18; // rdi
  size_t v19; // r13
  PACL v20; // rdx
  int v21; // eax
  int v22; // ecx
  ACL *v23; // r14
  __int64 v24; // rsi
  PACL v25; // rdi
  PACL v26; // rdx
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // r15d
  ACL *v30; // r14
  unsigned int v31; // [rsp+20h] [rbp-18h]
  PACL Dacl[2]; // [rsp+28h] [rbp-10h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+88h] [rbp+50h] BYREF
  char *v35; // [rsp+90h] [rbp+58h]
  PSID Owner; // [rsp+98h] [rbp+60h] BYREF

  v35 = (char *)NewSid;
  *NumChanges = 0;
  v5 = *((unsigned __int8 *)OldSid + 1);
  Owner = 0LL;
  v7 = 4 * v5;
  v31 = v7;
  v9 = SecurityDescriptor;
  result = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &OwnerDefaulted);
  if ( result >= 0 )
  {
    v11 = (char *)Owner;
    if ( Owner )
    {
      if ( *(_BYTE *)Owner == *(_BYTE *)OldSid )
      {
        v12 = *((unsigned __int8 *)OldSid + 1);
        if ( *((_BYTE *)Owner + 1) == (_BYTE)v12 || *((unsigned __int8 *)Owner + 1) == v12 + 1 )
        {
          v13 = *(_DWORD *)((char *)Owner + 2) - *(_DWORD *)((char *)OldSid + 2);
          if ( !v13 )
            v13 = *((unsigned __int16 *)Owner + 3) - *((unsigned __int16 *)OldSid + 3);
          if ( !v13 && !memcmp((char *)Owner + 8, (char *)OldSid + 8, v7) )
          {
            memmove(v11 + 8, (char *)NewSid + 8, v7);
            ++*NumChanges;
          }
        }
      }
    }
    Owner = 0LL;
    result = RtlGetGroupSecurityDescriptor(v9, &Owner, &OwnerDefaulted);
    if ( result >= 0 )
    {
      v14 = (char *)Owner;
      if ( Owner )
      {
        if ( *(_BYTE *)Owner == *(_BYTE *)OldSid )
        {
          v15 = *((unsigned __int8 *)OldSid + 1);
          if ( *((_BYTE *)Owner + 1) == (_BYTE)v15 || *((unsigned __int8 *)Owner + 1) == v15 + 1 )
          {
            v16 = *(_DWORD *)((char *)Owner + 2) - *(_DWORD *)((char *)OldSid + 2);
            if ( !v16 )
              v16 = *((unsigned __int16 *)Owner + 3) - *((unsigned __int16 *)OldSid + 3);
            if ( !v16 && !memcmp((char *)Owner + 8, (char *)OldSid + 8, v7) )
            {
              memmove(v14 + 8, (char *)NewSid + 8, v7);
              ++*NumChanges;
            }
          }
        }
      }
      Dacl[0] = 0LL;
      result = RtlGetDaclSecurityDescriptor(v9, (PBOOLEAN)&Owner, Dacl, &OwnerDefaulted);
      if ( result >= 0 )
      {
        if ( (_BYTE)Owner )
        {
          if ( Dacl[0] )
          {
            AceCount = Dacl[0]->AceCount;
            v18 = Dacl[0] + 1;
            if ( Dacl[0]->AceCount )
            {
              v19 = v7;
              while ( v18->AclRevision > 3u )
              {
                if ( v18->AclRevision == 4 )
                {
                  v20 = (PACL)((char *)v18 + 4 * HIBYTE(v18[1].AceCount) + 20);
                  goto LABEL_30;
                }
LABEL_38:
                v18 = (PACL)((char *)v18 + v18->AclSize);
                if ( !--AceCount )
                {
                  v9 = SecurityDescriptor;
                  v7 = v31;
                  goto LABEL_40;
                }
              }
              v20 = v18 + 1;
LABEL_30:
              if ( v20->AclRevision == *(_BYTE *)OldSid )
              {
                v21 = *((unsigned __int8 *)OldSid + 1);
                if ( v20->Sbz1 == (_BYTE)v21 || v20->Sbz1 == v21 + 1 )
                {
                  v22 = *(_DWORD *)&v20->AclSize - *(_DWORD *)((char *)OldSid + 2);
                  if ( !v22 )
                    v22 = v20->Sbz2 - *((unsigned __int16 *)OldSid + 3);
                  if ( !v22 )
                  {
                    v23 = v20 + 1;
                    if ( !memcmp(&v20[1], (char *)OldSid + 8, v19) )
                    {
                      memmove(v23, v35 + 8, v19);
                      ++*NumChanges;
                    }
                  }
                }
              }
              goto LABEL_38;
            }
          }
        }
LABEL_40:
        Dacl[0] = 0LL;
        result = RtlGetSaclSecurityDescriptor(v9, (PBOOLEAN)&Owner, Dacl, &OwnerDefaulted);
        if ( result >= 0 && (_BYTE)Owner && Dacl[0] )
        {
          v24 = Dacl[0]->AceCount;
          v25 = Dacl[0] + 1;
          if ( Dacl[0]->AceCount )
          {
            while ( v25->AclRevision > 3u )
            {
              if ( v25->AclRevision == 4 )
              {
                v26 = (PACL)((char *)v25 + 4 * HIBYTE(v25[1].AceCount) + 20);
                goto LABEL_48;
              }
LABEL_56:
              v7 = v31;
              v25 = (PACL)((char *)v25 + v25->AclSize);
              if ( !--v24 )
                return 0;
            }
            v26 = v25 + 1;
LABEL_48:
            if ( v26->AclRevision == *(_BYTE *)OldSid )
            {
              v27 = *((unsigned __int8 *)OldSid + 1);
              if ( v26->Sbz1 == (_BYTE)v27 || v26->Sbz1 == v27 + 1 )
              {
                v28 = *(_DWORD *)&v26->AclSize - *(_DWORD *)((char *)OldSid + 2);
                if ( !v28 )
                  v28 = v26->Sbz2 - *((unsigned __int16 *)OldSid + 3);
                if ( !v28 )
                {
                  v29 = v7;
                  v30 = v26 + 1;
                  if ( !memcmp(&v26[1], (char *)OldSid + 8, v29) )
                  {
                    memmove(v30, v35 + 8, v29);
                    ++*NumChanges;
                  }
                }
              }
            }
            goto LABEL_56;
          }
          return 0;
        }
      }
    }
  }
  return result;
}
