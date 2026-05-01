/*
 * XREFs of sub_18000D260 @ 0x18000D260
 * Callers:
 *     sub_18000E4B8 @ 0x18000E4B8 (sub_18000E4B8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_18000CF24 @ 0x18000CF24 (sub_18000CF24.c)
 *     sub_18000CF44 @ 0x18000CF44 (sub_18000CF44.c)
 *     sub_18000E2D0 @ 0x18000E2D0 (sub_18000E2D0.c)
 *     sub_18000F0A8 @ 0x18000F0A8 (sub_18000F0A8.c)
 *     sub_1800103F4 @ 0x1800103F4 (sub_1800103F4.c)
 *     sub_180010A0C @ 0x180010A0C (sub_180010A0C.c)
 *     sub_180010E80 @ 0x180010E80 (sub_180010E80.c)
 *     sub_180011834 @ 0x180011834 (sub_180011834.c)
 *     sub_180011ACC @ 0x180011ACC (sub_180011ACC.c)
 */

__int64 __fastcall sub_18000D260(__int64 a1, _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  _DWORD *v10; // rax
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v14; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  void *retaddr; // [rsp+278h] [rbp+178h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  sub_180010A0C(Name, 260LL, L"Local\\SM0:%lu:%lu:%hs", CurrentProcessId, 120, a1);
  v12 = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  sub_180011ACC(&v12, Mutex);
  if ( v12 )
  {
    sub_180011834(&v12, &v13);
    v14 = 0LL;
    v7 = sub_180010E80(Name, &v14);
    v6 = v7;
    if ( v7 < 0 )
    {
      v9 = 296LL;
LABEL_5:
      sub_1800103F4(retaddr, v9, v8, (unsigned int)v7);
      sub_18000CF44(&v13);
      goto LABEL_9;
    }
    v10 = v14;
    if ( v14 )
    {
      *a2 = v14;
      *(_DWORD *)*a2 = *v10 + 1;
    }
    else
    {
      v7 = sub_18000F0A8(Name, &v12, a2);
      v6 = v7;
      if ( v7 < 0 )
      {
        v9 = 304LL;
        goto LABEL_5;
      }
    }
    sub_18000CF44(&v13);
    v6 = 0;
    goto LABEL_9;
  }
  v6 = sub_18000E2D0();
LABEL_9:
  sub_18000CF24(&v12);
  return v6;
}
