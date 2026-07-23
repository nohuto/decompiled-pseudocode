/*
 * XREFs of sub_140783DB8 @ 0x140783DB8
 * Callers:
 *     sub_14078362C @ 0x14078362C (sub_14078362C.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     _wcsnicmp @ 0x1403E15D0 (_wcsnicmp.c)
 *     _wtoi @ 0x1403E17F0 (_wtoi.c)
 *     sub_1406EB7E8 @ 0x1406EB7E8 (sub_1406EB7E8.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_140784064 @ 0x140784064 (sub_140784064.c)
 *     sub_140784160 @ 0x140784160 (sub_140784160.c)
 *     sub_14078418C @ 0x14078418C (sub_14078418C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140783DB8(__int64 a1, __int64 a2, int *a3, void **a4, _BYTE *a5, _BYTE *a6)
{
  ULONG_PTR *v7; // rbx
  __int64 v8; // rsi
  ULONG_PTR *v9; // r13
  __int64 v10; // rdi
  int v11; // r14d
  wchar_t *v12; // r12
  __int64 v13; // rax
  ULONG_PTR v14; // rdi
  int v15; // eax
  _DWORD *v17; // rax
  size_t v18; // rbx
  unsigned int v19; // r12d
  const wchar_t *v20; // rdx
  unsigned __int64 v21; // rax
  wchar_t *v22; // rsi
  unsigned int v23; // ebx
  _BYTE *v24; // rax
  unsigned int v25; // ebx
  __int64 v26; // rsi
  _BYTE *v27; // rax
  ULONG_PTR *v28; // rdi
  wchar_t *Str1; // [rsp+30h] [rbp-59h]
  unsigned int v30; // [rsp+38h] [rbp-51h] BYREF
  ULONG_PTR *v31; // [rsp+40h] [rbp-49h]
  int v32; // [rsp+48h] [rbp-41h] BYREF
  ULONG_PTR *v33; // [rsp+50h] [rbp-39h] BYREF
  _BYTE *v34; // [rsp+58h] [rbp-31h]
  int *v35; // [rsp+60h] [rbp-29h]
  void **v36; // [rsp+68h] [rbp-21h]
  __int64 v37; // [rsp+70h] [rbp-19h]
  wchar_t v38[8]; // [rsp+78h] [rbp-11h] BYREF

  v35 = a3;
  v36 = a4;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v34 = a5;
  v31 = 0LL;
  *a5 = 1;
  v10 = *(_QWORD *)(a1 + 56);
  v30 = 0;
  if ( v10 && *(_DWORD *)(v10 + 36) )
  {
    v11 = 0;
    *(_OWORD *)(a2 + 24) = *(_OWORD *)(v10 + 72);
    if ( (*(_DWORD *)(v10 + 16) & 1) != 0 )
    {
      *a6 = 1;
    }
    else
    {
      *a6 = 0;
      Str1 = (wchar_t *)sub_14078418C(a2 + *(unsigned int *)(a2 + 48), a6);
      v12 = Str1;
      if ( Str1 )
      {
        v31 = (ULONG_PTR *)*v36;
        v7 = v31;
        v33 = v31;
        v32 = *v35;
        KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        if ( *(_DWORD *)(v10 + 36) )
        {
          v13 = v10 + 56;
          v14 = *(_QWORD *)(v10 + 56);
          v37 = v13;
          if ( v14 != v13 )
          {
            do
            {
              if ( (_BYTE)v9 )
                break;
              v15 = *(_DWORD *)(v14 + 16);
              if ( (v15 & 0x89000) == 0 )
              {
                if ( (v15 & 1) != 0 )
                {
                  v17 = *(_DWORD **)(v14 + 88);
                  v18 = -1LL;
                  v19 = *v17;
                  v20 = (const wchar_t *)(v17 + 1);
                  do
                    ++v18;
                  while ( v20[v18] );
                  v21 = -1LL;
                  do
                    ++v21;
                  while ( Str1[v21] );
                  if ( v21 <= v18 || wcsnicmp(Str1, v20, v18) )
                  {
                    v12 = Str1;
                  }
                  else
                  {
                    v22 = &Str1[v18];
                    v23 = wtoi(v22);
                    if ( sub_1406EB7E8(v22) )
                    {
                      if ( v23 >= v19 && v23 < v19 + *(_DWORD *)(v14 + 72) && v23 < 0xF423F )
                      {
                        sub_1402E1280(v38, 0xEuLL, L"%d", v23);
                        if ( !wcsicmp(v38, v22) )
                        {
                          *(_DWORD *)(a2 + 44) |= 0x80u;
                          LOBYTE(v9) = 1;
                          *(_DWORD *)(a2 + 4) = *(_DWORD *)(v14 + 80);
                          v24 = v34;
                          *(_DWORD *)(a2 + 52) = v23 - v19;
                          *v24 = 0;
                        }
                      }
                    }
                    v12 = Str1;
                  }
                }
                else if ( (v15 & 2) != 0 )
                {
                  v25 = 0;
                  v26 = *(_QWORD *)(v14 + 88);
                  if ( *(_DWORD *)(v14 + 72) )
                  {
                    while ( wcsicmp(*(const wchar_t **)(v26 + 8LL * v25), v12) )
                    {
                      if ( ++v25 >= *(_DWORD *)(v14 + 72) )
                        goto LABEL_12;
                    }
                    *(_DWORD *)(a2 + 44) |= 0x80u;
                    LOBYTE(v9) = 1;
                    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v14 + 80);
                    v27 = v34;
                    *(_DWORD *)(a2 + 52) = v25;
                    *v27 = 0;
                  }
                }
                else
                {
                  sub_140784160(v14);
                  v11 = sub_140784064((unsigned int)&v33, (unsigned int)&v30, (unsigned int)&v32, (_DWORD)v31, v14);
                  LOBYTE(v9) = v11 < 0;
                }
              }
LABEL_12:
              v14 = *(_QWORD *)v14;
            }
            while ( v14 != v37 );
            v7 = v33;
            v8 = v30;
          }
        }
        else
        {
          v11 = -1073741055;
        }
        ExFreePoolWithTag(v12, 0);
        KeReleaseMutex(&Object, 0);
        v9 = v31;
      }
      else
      {
        v11 = -1073741670;
      }
      if ( *v34 )
      {
        *v35 = v8;
        *v36 = v7;
      }
      else if ( v7 )
      {
        if ( (_DWORD)v8 )
        {
          v28 = v7;
          do
          {
            sub_1407838E0((__int64 *)&off_140C037A0, *v28++);
            --v8;
          }
          while ( v8 );
          v9 = v31;
        }
        if ( v7 != v9 )
          ExFreePoolWithTag(v7, 0);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741055;
  }
  return (unsigned int)v11;
}
