/*
 * XREFs of sub_14078C2F8 @ 0x14078C2F8
 * Callers:
 *     sub_14078AC7C @ 0x14078AC7C (sub_14078AC7C.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402E0978 @ 0x1402E0978 (sub_1402E0978.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_1406E84C0 @ 0x1406E84C0 (sub_1406E84C0.c)
 *     sub_14074C534 @ 0x14074C534 (sub_14074C534.c)
 *     sub_14076CE48 @ 0x14076CE48 (sub_14076CE48.c)
 *     sub_14076DAF0 @ 0x14076DAF0 (sub_14076DAF0.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     sub_14077CD90 @ 0x14077CD90 (sub_14077CD90.c)
 *     sub_140A26770 @ 0x140A26770 (sub_140A26770.c)
 */

__int64 __fastcall sub_14078C2F8(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  _DWORD *v7; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v9; // eax
  _DWORD *v10; // rcx
  bool v11; // r14
  __int64 i; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdi
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v21[3]; // [rsp+44h] [rbp-BCh] BYREF
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t v23[40]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Str2[40]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t Str1[40]; // [rsp+100h] [rbp+0h] BYREF
  wchar_t v26[40]; // [rsp+150h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  v2 = 0;
  v20 = 0;
  memset(v21, 0, sizeof(v21));
  v4 = *(_QWORD *)(v1 + 4);
  P = 0LL;
  v5 = v4 - 0x47B1A82FFCF528F6LL;
  if ( !v5 )
    v5 = *(_QWORD *)(v1 + 12) - 0x28AD4C5950803AADLL;
  if ( !v5 )
  {
    v2 = sub_140779DC4((__int64 **)&P);
    if ( v2 >= 0 )
    {
      v2 = sub_14074C534(*(_QWORD *)(a1 + 152), 6, 0LL, (__int64)&v21[1]);
      if ( v2 >= 0 )
      {
        v7 = *(_DWORD **)&v21[1];
        if ( !*(_QWORD *)&v21[1] )
        {
LABEL_38:
          if ( P )
            sub_140779A50((PVOID **)P);
          return (unsigned int)v2;
        }
        if ( !**(_DWORD **)&v21[1] )
        {
LABEL_35:
          if ( v7 )
          {
            v19 = 0LL;
            if ( *v7 )
            {
              do
              {
                ObfDereferenceObject(*(PVOID *)&v7[2 * v19 + 2]);
                v7 = *(_DWORD **)&v21[1];
                v19 = (unsigned int)(v19 + 1);
              }
              while ( (unsigned int)v19 < **(_DWORD **)&v21[1] );
            }
          }
          goto LABEL_38;
        }
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
        v20 = 78;
        if ( (int)sub_14077CD90(
                    *(__int64 *)&qword_140D00AC0,
                    a1 + 168,
                    0LL,
                    37,
                    (__int64)v21,
                    (__int64)Str1,
                    (__int64)&v20,
                    0) >= 0
          && v21[0] == 1
          && v20 == 78 )
        {
          v2 = sub_14076CE48(*(__int64 *)&qword_140D00AC0, a1 + 168, Str1, Str2);
          if ( v2 >= 0 )
          {
            v9 = wcsicmp(Str1, Str2);
            v10 = *(_DWORD **)&v21[1];
            v11 = v9 != 0;
            for ( i = 0LL; (unsigned int)i < *v10; i = (unsigned int)(i + 1) )
            {
              v13 = *(_QWORD *)&v10[2 * i + 2];
              if ( v13 )
              {
                v14 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
                if ( v14 )
                {
                  v15 = *(_QWORD *)(v14 + 48);
                  if ( v15 )
                  {
                    v20 = 78;
                    v16 = sub_14077CD90(
                            *(__int64 *)&qword_140D00AC0,
                            v15,
                            0LL,
                            37,
                            (__int64)v21,
                            (__int64)v26,
                            (__int64)&v20,
                            0);
                    v2 = v16;
                    if ( v16 != -1073741275 )
                    {
                      if ( v16 < 0 || v21[0] != 1 || v20 != 78 )
                        goto LABEL_32;
                      v2 = sub_14076CE48(*(__int64 *)&qword_140D00AC0, v15, v26, v23);
                      if ( v2 < 0 )
                        break;
                      if ( !v11 )
                      {
                        v2 = sub_140A26770(v17, Str1, Str2, v23);
                        sub_14076DAF0(v23);
                        if ( v2 < 0 )
                          break;
                        v2 = sub_1402E0978(Str2, 0x4EuLL, (__int64)v23);
                        if ( v2 < 0 )
                          break;
                        v11 = 1;
                      }
                      if ( wcsicmp(v23, Str2) )
                      {
                        if ( !sub_1406E84C0(qword_140D00AC0, v23) )
                        {
                          v2 = sub_140A26770(v18, v26, v23, Str2);
                          sub_14076DAF0(Str2);
                          if ( v2 < 0 )
                            break;
                        }
                      }
                    }
                    v10 = *(_DWORD **)&v21[1];
                  }
                }
              }
            }
          }
        }
        else
        {
LABEL_32:
          v2 = -1073739509;
        }
        ExReleaseResourceLite(&stru_140C462A0);
        KeLeaveCriticalRegion();
      }
    }
    v7 = *(_DWORD **)&v21[1];
    goto LABEL_35;
  }
  return (unsigned int)v2;
}
