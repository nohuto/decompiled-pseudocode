/*
 * XREFs of sub_18000F2D0 @ 0x18000F2D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011B8C @ 0x180011B8C (sub_180011B8C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000F2D0(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  FARPROC WilFailureNotifyWatchers; // rax
  HMODULE v7; // rax
  int v8; // ecx
  __int64 result; // rax
  int v10; // ecx
  int v11; // ecx
  int v12; // [rsp+20h] [rbp-30h] BYREF
  __int64 v13; // [rsp+28h] [rbp-28h]
  char v14; // [rsp+30h] [rbp-20h]
  __int16 v15; // [rsp+32h] [rbp-1Eh]
  __int16 v16; // [rsp+38h] [rbp-18h]
  int v17; // [rsp+3Ch] [rbp-14h]
  __int64 v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+48h] [rbp-8h]
  __int64 v20; // [rsp+60h] [rbp+10h] BYREF

  v4 = *((_DWORD *)a1 + 2);
  v17 = 0;
  v20 = 0LL;
  v12 = v4;
  v13 = *((_QWORD *)a1 + 3);
  v14 = *a1;
  v15 = word_180032D88;
  v16 = *((_WORD *)a1 + 32);
  v18 = *((_QWORD *)a1 + 7);
  v19 = *((_QWORD *)a1 + 16);
  WilFailureNotifyWatchers = (FARPROC)qword_1800329B0;
  if ( qword_1800329B0
    || (v7 = (HMODULE)sub_180011B8C(a1, a2, a3, a4, v12, v13),
        WilFailureNotifyWatchers = GetProcAddress(v7, "WilFailureNotifyWatchers"),
        (qword_1800329B0 = (__int64)WilFailureNotifyWatchers) != 0) )
  {
    ((void (__fastcall *)(_QWORD, int *, __int64 *))WilFailureNotifyWatchers)(0LL, &v12, &v20);
  }
  v8 = BYTE4(v20);
  result = (unsigned int)v20;
  *((_DWORD *)a1 + 4) = v20;
  v10 = v8 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
        *((_DWORD *)a1 + 1) |= 4u;
    }
    else
    {
      *((_DWORD *)a1 + 1) |= 2u;
    }
  }
  else
  {
    *((_DWORD *)a1 + 1) |= 1u;
  }
  return result;
}
