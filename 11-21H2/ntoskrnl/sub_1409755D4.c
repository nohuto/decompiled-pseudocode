/*
 * XREFs of sub_1409755D4 @ 0x1409755D4
 * Callers:
 *     sub_1405A3818 @ 0x1405A3818 (sub_1405A3818.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_1409755D4(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  __int64 v6; // rbx
  unsigned int ProcessId; // eax
  __int64 v12; // r8
  int v14; // [rsp+28h] [rbp-E0h]
  int v15; // [rsp+30h] [rbp-D8h]
  unsigned int v16; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+78h] [rbp-90h] BYREF
  unsigned int *v24; // [rsp+98h] [rbp-70h]
  int v25; // [rsp+A0h] [rbp-68h]
  int v26; // [rsp+A4h] [rbp-64h]
  __int64 *v27; // [rsp+A8h] [rbp-60h]
  int v28; // [rsp+B0h] [rbp-58h]
  int v29; // [rsp+B4h] [rbp-54h]
  __int64 *v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+C0h] [rbp-48h]
  int v32; // [rsp+C4h] [rbp-44h]
  int *v33; // [rsp+C8h] [rbp-40h]
  int v34; // [rsp+D0h] [rbp-38h]
  int v35; // [rsp+D4h] [rbp-34h]
  int *v36; // [rsp+D8h] [rbp-30h]
  int v37; // [rsp+E0h] [rbp-28h]
  int v38; // [rsp+E4h] [rbp-24h]
  int *v39; // [rsp+E8h] [rbp-20h]
  int v40; // [rsp+F0h] [rbp-18h]
  int v41; // [rsp+F4h] [rbp-14h]
  __int64 *v42; // [rsp+F8h] [rbp-10h]
  int v43; // [rsp+100h] [rbp-8h]
  int v44; // [rsp+104h] [rbp-4h]
  _UNKNOWN *retaddr; // [rsp+130h] [rbp+28h] BYREF

  v5 = &retaddr;
  v6 = *(_QWORD *)&qword_140C53448;
  if ( *(_QWORD *)&qword_140C53448 )
  {
    if ( **(_DWORD **)&qword_140C53448 > 5u )
    {
      LOBYTE(v5) = sub_1402A2000(*(__int64 *)&qword_140C53448, 0x400000000020LL);
      if ( (_BYTE)v5 )
      {
        ProcessId = (unsigned int)PsGetProcessId(*((PEPROCESS *)KeGetCurrentThread() + 23));
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v44 = 0;
        v16 = ProcessId;
        v24 = &v16;
        v27 = &v20;
        v30 = &v21;
        v33 = &v17;
        v36 = &v18;
        v19 = a5;
        v39 = &v19;
        v42 = &v22;
        v25 = 4;
        v28 = 8;
        v31 = 8;
        v34 = 4;
        v37 = 4;
        v40 = 4;
        v43 = 8;
        v20 = a1;
        v21 = a2;
        v17 = a3;
        v18 = a4;
        v22 = 0x1000000LL;
        LOBYTE(v5) = sub_14024A9B0(v6, (unsigned __int8 *)&byte_14002D0F9, v12, 1u, v14, v15, 9u, &v23);
      }
    }
  }
  return (char)v5;
}
