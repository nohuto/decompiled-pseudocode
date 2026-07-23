/*
 * XREFs of sub_14081D0F0 @ 0x14081D0F0
 * Callers:
 *     sub_140788A80 @ 0x140788A80 (sub_140788A80.c)
 *     sub_1408274C4 @ 0x1408274C4 (sub_1408274C4.c)
 *     sub_140A30930 @ 0x140A30930 (sub_140A30930.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     sub_1406C1D24 @ 0x1406C1D24 (sub_1406C1D24.c)
 *     sub_1406C2248 @ 0x1406C2248 (sub_1406C2248.c)
 *     sub_1406C59F0 @ 0x1406C59F0 (sub_1406C59F0.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1407827F0 @ 0x1407827F0 (sub_1407827F0.c)
 *     sub_14081D304 @ 0x14081D304 (sub_14081D304.c)
 *     sub_140859460 @ 0x140859460 (sub_140859460.c)
 */

__int64 __fastcall sub_14081D0F0(
        __int64 a1,
        const wchar_t *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        const WCHAR *SourceString,
        unsigned int a7)
{
  __int64 (**v7)[2]; // r13
  int v11; // esi
  const UNICODE_STRING *v12; // r12
  int v13; // eax
  int v14; // edx
  unsigned int v15; // r10d
  __int64 **v16; // r8
  __int64 *v17; // r9
  unsigned int v18; // r8d
  __int64 (**v19)[2]; // r9
  __int64 *v20; // r10
  unsigned int v21; // r8d
  __int64 (**v22)[3]; // r9
  __int64 *v23; // r10
  __int64 v24; // rcx
  HANDLE v25; // rcx
  int v26; // eax
  __int64 v28; // rax
  bool v29; // zf
  __int64 v30; // rax
  int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rax
  struct _KTHREAD *v37; // rax
  const UNICODE_STRING *v38; // rbx
  int v39; // eax
  struct _ERESOURCE *Buffer; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  struct _KTHREAD *CurrentThread; // rax
  const UNICODE_STRING *v47; // rdi
  UNICODE_STRING v48; // xmm0
  const UNICODE_STRING *v49; // [rsp+50h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF

  LODWORD(v7) = 0;
  Handle = 0LL;
  v49 = 0LL;
  v11 = 0;
  v12 = 0LL;
  DestinationString = 0LL;
  v13 = wcsicmp(a2, asc_140868930);
  v14 = *(_DWORD *)(a4 + 16);
  if ( v13 )
  {
    if ( v14 == 2 )
    {
      v33 = *(_QWORD *)a4 - 0x498DAD270D6C5BD7LL;
      if ( *(_QWORD *)a4 == 0x498DAD270D6C5BD7LL )
        v33 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
      if ( !v33 )
      {
LABEL_60:
        v11 = -1073741790;
        goto LABEL_30;
      }
    }
    v15 = 0;
    v16 = &off_140C04470;
    while ( 1 )
    {
      v17 = *v16;
      if ( *((_DWORD *)*v16 + 4) == v14 )
      {
        v34 = *v17 - *(_QWORD *)a4;
        if ( *v17 == *(_QWORD *)a4 )
          v34 = v17[1] - *(_QWORD *)(a4 + 8);
        if ( !v34 )
          break;
      }
      ++v15;
      ++v16;
      if ( v15 >= 8 )
      {
        v18 = 0;
        v19 = &off_140001300;
        while ( 1 )
        {
          v20 = (__int64 *)*v19;
          if ( LODWORD((**v19)[2]) == v14 )
          {
            v44 = *v20 - *(_QWORD *)a4;
            if ( *v20 == *(_QWORD *)a4 )
              v44 = v20[1] - *(_QWORD *)(a4 + 8);
            if ( !v44 )
              break;
          }
          ++v18;
          v19 += 5;
          if ( v18 >= 0xC )
            goto LABEL_9;
        }
        v7 = &off_140001300 + 5 * v18;
        if ( v7 )
          goto LABEL_19;
LABEL_9:
        v21 = (unsigned int)v7;
        v22 = &off_1400014E0;
        while ( 1 )
        {
          v23 = (__int64 *)*v22;
          if ( LODWORD((**v22)[2]) == v14 )
          {
            v24 = *v23 - *(_QWORD *)a4;
            if ( *v23 == *(_QWORD *)a4 )
              v24 = v23[1] - *(_QWORD *)(a4 + 8);
            if ( !v24 )
              break;
          }
          ++v21;
          v22 += 5;
          if ( v21 >= 4 )
            goto LABEL_126;
        }
        v7 = (__int64 (**)[2])(&off_1400014E0 + 5 * v21);
        if ( !v7 )
        {
LABEL_126:
          v11 = -1073741802;
          goto LABEL_30;
        }
        v11 = sub_1406C2248(a1, a2, &v49);
        if ( v11 < 0 )
          goto LABEL_30;
        v12 = v49;
LABEL_19:
        if ( a5 != *((_DWORD *)v7 + 2) && a5 )
          goto LABEL_45;
        v25 = a3;
        if ( a3 )
          goto LABEL_25;
        if ( v12 )
          v26 = sub_1407827F0((__int64 *)a1, *(__int64 **)(a1 + 40), 1u, a2, 2, 1, &Handle, 0LL, 0LL);
        else
          v26 = sub_140859460(a1, a2, 2LL, 0LL, &Handle, 0LL);
        v11 = v26;
        if ( v26 >= 0 )
        {
          v25 = 0LL;
LABEL_25:
          if ( Handle )
            v25 = Handle;
          v11 = sub_14081D304(v25, v25, v7, a5, SourceString, a7);
          if ( v11 >= 0 && v49 && (*(_DWORD *)&v49[4].Length & 0x10) != 0 && *(_DWORD *)(a4 + 16) == 14 )
          {
            v45 = *(_QWORD *)a4 - 0x4F7A142C8163EB00LL;
            if ( *(_QWORD *)a4 == 0x4F7A142C8163EB00LL )
              v45 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
            if ( !v45 && a5 )
            {
              if ( a7 >= 2 && SourceString && !SourceString[((unsigned __int64)a7 >> 1) - 1] )
              {
                if ( !RtlCreateUnicodeString(&DestinationString, SourceString) )
                {
                  v11 = -1073741670;
                  goto LABEL_30;
                }
                CurrentThread = KeGetCurrentThread();
                --*((_WORD *)CurrentThread + 242);
                v47 = v49;
                ExAcquireResourceExclusiveLite((PERESOURCE)v49[9].Buffer, 1u);
                RtlFreeUnicodeString((PUNICODE_STRING)&v47[3]);
                v48 = DestinationString;
                LODWORD(v47[2].Buffer) = 0;
                v47[3] = v48;
                Buffer = (struct _ERESOURCE *)v47[9].Buffer;
                goto LABEL_125;
              }
              goto LABEL_45;
            }
          }
        }
        goto LABEL_30;
      }
    }
    v11 = sub_1406C2248(a1, a2, &v49);
    if ( v11 < 0 )
      goto LABEL_30;
    v35 = *(_DWORD *)(a4 + 16);
    switch ( v35 )
    {
      case 5:
        v36 = *(_QWORD *)a4 - 0x4F7A142C8163EB00LL;
        if ( *(_QWORD *)a4 == 0x4F7A142C8163EB00LL )
          v36 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v36 )
          goto LABEL_30;
        if ( a5 == 17 && a7 == 1 && SourceString )
        {
          if ( (*(_DWORD *)&v49[4].Length & 1) != 0 )
            goto LABEL_60;
          v37 = KeGetCurrentThread();
          --*((_WORD *)v37 + 242);
          v38 = v49;
          ExAcquireResourceExclusiveLite((PERESOURCE)v49[9].Buffer, 1u);
          if ( *(_BYTE *)SourceString == 0xFF )
            v39 = sub_1406C1D24((_QWORD *)a1, (__int64)v38);
          else
            v39 = sub_1406C59F0(a1, (__int64)v38);
          Buffer = (struct _ERESOURCE *)v38[9].Buffer;
          v11 = v39;
LABEL_125:
          ExReleaseResourceLite(Buffer);
          sub_1402F9540((__int64)KeGetCurrentThread());
          goto LABEL_30;
        }
        goto LABEL_45;
      case 6:
        v41 = *(_QWORD *)a4 - 0x4F7A142C8163EB00LL;
        if ( *(_QWORD *)a4 == 0x4F7A142C8163EB00LL )
          v41 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v41 )
          goto LABEL_30;
        if ( a5 != 17 || a7 != 1 || !SourceString )
          goto LABEL_45;
        if ( *(_BYTE *)SourceString == 0xFF )
        {
          *(_QWORD *)(a1 + 48) = v49;
          goto LABEL_30;
        }
        if ( v49 != *(const UNICODE_STRING **)(a1 + 48) )
        {
          v29 = v49 == 0LL;
          goto LABEL_43;
        }
        goto LABEL_44;
      case 7:
        v42 = *(_QWORD *)a4 - 0x4F7A142C8163EB00LL;
        if ( *(_QWORD *)a4 == 0x4F7A142C8163EB00LL )
          v42 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        if ( v42 )
          goto LABEL_30;
        if ( a5 == 17 && a7 == 1 && SourceString )
        {
          if ( *(_BYTE *)SourceString == 0xFF )
            *(_DWORD *)&v49[4].Length |= 4u;
          else
            *(_DWORD *)&v49[4].Length &= ~4u;
          goto LABEL_30;
        }
        goto LABEL_45;
    }
    if ( v35 != 11 )
      goto LABEL_30;
    v43 = *(_QWORD *)a4 - 0x4F7A142C8163EB00LL;
    if ( *(_QWORD *)a4 == 0x4F7A142C8163EB00LL )
      v43 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
    if ( v43 )
      goto LABEL_30;
    if ( a5 != 7 || a7 != 4 || !SourceString )
      goto LABEL_45;
    if ( v49 != *(const UNICODE_STRING **)(a1 + 32) )
      goto LABEL_60;
    v31 = *(_DWORD *)SourceString;
    goto LABEL_54;
  }
  if ( v14 != 6 )
  {
    if ( v14 == 11 )
    {
      v30 = *(_QWORD *)a4 - 0x4F7A142C8163EB00LL;
      if ( *(_QWORD *)a4 == 0x4F7A142C8163EB00LL )
        v30 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v30 )
      {
        if ( a5 == 7 && a7 == 4 && SourceString )
        {
          v31 = *(_DWORD *)SourceString;
LABEL_54:
          v32 = v31 & 0xD0000000;
          *(_DWORD *)(a1 + 12) = v32;
          if ( v32 == 0x10000000 )
            *(_DWORD *)(a1 + 12) = -805306368;
          goto LABEL_30;
        }
LABEL_45:
        v11 = -1073741811;
        goto LABEL_30;
      }
    }
LABEL_56:
    v11 = -1073741637;
    goto LABEL_30;
  }
  v28 = *(_QWORD *)a4 - 0x4F7A142C8163EB00LL;
  if ( *(_QWORD *)a4 == 0x4F7A142C8163EB00LL )
    v28 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v28 )
    goto LABEL_56;
  if ( a5 != 17 || a7 != 1 || !SourceString )
    goto LABEL_45;
  v29 = *(_BYTE *)SourceString == 0xFF;
LABEL_43:
  if ( v29 )
LABEL_44:
    *(_QWORD *)(a1 + 48) = 0LL;
LABEL_30:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v11;
}
