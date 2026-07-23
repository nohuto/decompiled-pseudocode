/*
 * XREFs of sub_140948B70 @ 0x140948B70
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406C5724 @ 0x1406C5724 (sub_1406C5724.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_140948B70(__int64 a1, const WCHAR *a2, int a3, __int64 a4)
{
  char v7; // di
  PCUNICODE_STRING v8; // rax
  __int64 i; // rsi
  int v10; // eax
  void *v11; // rcx
  unsigned int v12; // r15d
  __int64 *v13; // r14
  __int64 j; // rsi
  int v15; // r8d
  const WCHAR *v16; // rdx
  int v17; // eax
  void *v18; // rcx
  unsigned int v19; // eax
  const WCHAR *k; // rsi
  __int64 v21; // rax
  int v23; // [rsp+40h] [rbp-99h]
  _BYTE v24[4]; // [rsp+60h] [rbp-79h] BYREF
  unsigned int v25; // [rsp+64h] [rbp-75h] BYREF
  int v26; // [rsp+68h] [rbp-71h] BYREF
  unsigned int v27; // [rsp+6Ch] [rbp-6Dh] BYREF
  _DWORD v28[2]; // [rsp+70h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-61h] BYREF
  _WORD v30[40]; // [rsp+90h] [rbp-49h] BYREF

  v28[1] = a3;
  memset(v30, 0, 0x4EuLL);
  v7 = 0;
  v26 = 0;
  v28[0] = 0;
  DestinationString = 0LL;
  v24[0] = 0;
  v25 = 0;
  v27 = 0;
  if ( !*(_BYTE *)(a4 + 8) || sub_1406C5724(a1, a2, v24) >= 0 && v24[0] )
  {
    v8 = *(PCUNICODE_STRING *)a4;
    if ( *(_QWORD *)a4 && v8->Length >= 2u && *v8->Buffer )
    {
      for ( i = *(_QWORD *)(a4 + 16); ; *(_QWORD *)(a4 + 16) = i )
      {
        v25 = *(_DWORD *)(a4 + 24);
        v10 = sub_14077CD90(a1, (__int64)a2, 0LL, 5, (__int64)&v26, i, (__int64)&v25, 0);
        v7 = 1;
        if ( !v10 && v25 < 2 )
          break;
        if ( v10 != -1073741789 )
        {
          if ( !v10 )
          {
            *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)*(unsigned int *)(a4 + 24) >> 1) - 2) = 0;
            if ( RtlInitUnicodeStringEx(&DestinationString, *(PCWSTR *)(a4 + 16)) >= 0 )
            {
              if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
                goto LABEL_54;
            }
          }
          break;
        }
        if ( v25 < 2 )
          break;
        i = ExAllocatePool2(256LL, v25, 1198550608LL);
        if ( !i )
          break;
        v11 = *(void **)(a4 + 16);
        if ( v11 )
          ExFreePoolWithTag(v11, 0);
        *(_DWORD *)(a4 + 24) = v25;
      }
      v12 = 0;
      v13 = &qword_14000A628;
      do
      {
        if ( *(_DWORD *)v13 == 2 && !v30[0] )
        {
          v25 = 78;
          if ( (int)sub_14077CD90(a1, (__int64)a2, 0LL, 9, (__int64)&v26, (__int64)v30, (__int64)&v25, 0) < 0
            || v26 != 1
            || v25 < 2 )
          {
            return 0;
          }
          v30[38] = 0;
        }
        for ( j = *(_QWORD *)(a4 + 16); ; *(_QWORD *)(a4 + 16) = j )
        {
          v15 = *(_DWORD *)v13;
          v16 = v30;
          v23 = *(_DWORD *)(a4 + 24);
          if ( *(_DWORD *)v13 == 1 )
            v16 = a2;
          v25 = *(_DWORD *)(a4 + 24);
          v17 = sub_14077DA5C(a1, (__int64)v16, v15, 0, 0LL, *(v13 - 1), (__int64)v28, j, v23, (__int64)&v27, 0);
          v25 = v27;
          if ( !v17 && v27 < 2 )
            break;
          if ( v17 != -1073741789 )
          {
            if ( v17 >= 0 && v28[0] == 8210 )
            {
              v19 = *(_DWORD *)(a4 + 24);
              if ( v19 > 2 )
              {
                *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v19 >> 1) - 2) = 0;
                v19 = *(_DWORD *)(a4 + 24);
              }
              if ( v19 > 4 )
                *(_WORD *)(*(_QWORD *)(a4 + 16) + 2 * ((unsigned __int64)v19 >> 1) - 4) = 0;
              for ( k = *(const WCHAR **)(a4 + 16); *k; k += v21 + 1 )
              {
                if ( RtlInitUnicodeStringEx(&DestinationString, k) >= 0
                  && RtlEqualUnicodeString(*(PCUNICODE_STRING *)a4, &DestinationString, 1u) )
                {
                  goto LABEL_54;
                }
                v21 = -1LL;
                do
                  ++v21;
                while ( k[v21] );
              }
            }
            break;
          }
          if ( v27 < 2 )
            break;
          j = ExAllocatePool2(256LL, v27, 1198550608LL);
          if ( !j )
            break;
          v18 = *(void **)(a4 + 16);
          if ( v18 )
            ExFreePoolWithTag(v18, 0);
          *(_DWORD *)(a4 + 24) = v25;
        }
        ++v12;
        v13 += 2;
      }
      while ( v12 < 4 );
      return 0;
    }
    else
    {
      v7 = 1;
LABEL_54:
      if ( *(_QWORD *)(a4 + 32) )
        return sub_14042A5E0(a1, a2);
    }
  }
  return v7;
}
