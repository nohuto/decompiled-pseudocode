/*
 * XREFs of CreateKeyRecursively @ 0x14000D550
 * Callers:
 *     CreateMergeLink @ 0x14000D3A0 (CreateMergeLink.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateKeyRecursively(void **a1, void *a2, __int128 *a3, char a4)
{
  __int128 v4; // xmm0
  ACCESS_MASK v6; // r14d
  ULONG CreateOptions; // esi
  ULONG v8; // r15d
  NTSTATUS v9; // eax
  NTSTATUS v10; // ebx
  unsigned __int16 v12; // r12
  _WORD *v13; // r13
  _WORD *v14; // r13
  __int16 v15; // bx
  __int16 v16; // ax
  NTSTATUS v17; // r12d
  __int128 v18; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+48h] BYREF
  ULONG Disposition; // [rsp+D8h] [rbp+58h] BYREF

  KeyHandle = a2;
  v4 = *a3;
  ObjectAttributes.Length = 48;
  v6 = 131110;
  CreateOptions = a4 != 0 ? 3 : 0;
  v8 = 320;
  v18 = v4;
  if ( !a4 )
  {
    v6 = 131078;
    v8 = 64;
  }
  ObjectAttributes.Attributes = v8;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = NtCreateKey(&KeyHandle, v6, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
  v10 = v9;
  if ( v9 == -1073741772 )
  {
    ObjectAttributes.Attributes = 64;
    WORD1(v18) = v18;
    v12 = (unsigned __int16)v18 >> 1;
    v13 = (_WORD *)(*((_QWORD *)&v18 + 1) - 2LL + 2LL * ((unsigned __int16)v18 >> 1));
    while ( v12 )
    {
      while ( *v13 != 92 )
      {
        --v13;
        if ( !--v12 )
          goto LABEL_14;
      }
      do
      {
        --v13;
        --v12;
      }
      while ( v12 && *v13 == 92 );
LABEL_14:
      LOWORD(v18) = 2 * v12;
      v10 = NtCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      if ( v10 != -1073741772 )
      {
        if ( v10 >= 0 )
        {
          ObjectAttributes.RootDirectory = KeyHandle;
          KeyHandle = 0LL;
          v14 = (_WORD *)(*((_QWORD *)&v18 + 1) + 2LL * v12);
          v15 = (WORD1(v18) >> 1) - v12;
          if ( WORD1(v18) >> 1 != v12 )
          {
            while ( 1 )
            {
              do
              {
                if ( *v14 != 92 )
                  break;
                ++v14;
                --v15;
              }
              while ( v15 );
              *((_QWORD *)&v18 + 1) = v14;
              v16 = 0;
              for ( LOWORD(v18) = 0; v15; --v15 )
              {
                if ( *v14 == 92 )
                  break;
                v16 += 2;
                ++v14;
                LOWORD(v18) = v16;
              }
              WORD1(v18) = v16;
              if ( !v15 )
                break;
              v17 = NtCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
              NtClose(ObjectAttributes.RootDirectory);
              if ( v17 < 0 )
                return (unsigned int)v17;
              ObjectAttributes.RootDirectory = KeyHandle;
              KeyHandle = 0LL;
            }
          }
          ObjectAttributes.Attributes = v8;
          v10 = NtCreateKey(&KeyHandle, v6, &ObjectAttributes, 0, 0LL, CreateOptions, &Disposition);
          NtClose(ObjectAttributes.RootDirectory);
          if ( v10 >= 0 )
            goto LABEL_5;
        }
        return (unsigned int)v10;
      }
    }
  }
  else if ( v9 >= 0 )
  {
LABEL_5:
    *a1 = KeyHandle;
  }
  return (unsigned int)v10;
}
