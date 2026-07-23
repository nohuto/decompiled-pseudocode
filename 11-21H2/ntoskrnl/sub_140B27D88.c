/*
 * XREFs of sub_140B27D88 @ 0x140B27D88
 * Callers:
 *     sub_140B27B30 @ 0x140B27B30 (sub_140B27B30.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_140B51F18 @ 0x140B51F18 (sub_140B51F18.c)
 *     sub_140B5381C @ 0x140B5381C (sub_140B5381C.c)
 *     sub_140B5389C @ 0x140B5389C (sub_140B5389C.c)
 *     sub_140B53940 @ 0x140B53940 (sub_140B53940.c)
 *     sub_140B53A30 @ 0x140B53A30 (sub_140B53A30.c)
 *     sub_140B53AEC @ 0x140B53AEC (sub_140B53AEC.c)
 *     sub_140B55AEC @ 0x140B55AEC (sub_140B55AEC.c)
 */

__int64 __fastcall sub_140B27D88(__int64 a1)
{
  unsigned int v1; // ebx
  int v4; // r9d
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned int v7; // edi
  int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // rcx
  _DWORD *v11; // rbx
  _BYTE v12[40]; // [rsp+40h] [rbp-30h] BYREF

  v1 = 0;
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: verifier triage global/registry settings %X \n", dword_140C0C840);
  if ( dword_140C0C848 != -1 || dword_140C1AA70 )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: driver verifier settings present.\n");
    return 0LL;
  }
  if ( dword_140C0C840 == -1 )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage skipped because it is not enabled by default.\n");
    return 0LL;
  }
  if ( !dword_140C0C840 )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage skipped because it is disabled explicitely.\n");
    return 0LL;
  }
  if ( dword_140C0C840 < 0 )
  {
    v1 = (unsigned __int16)dword_140C0C840;
    v4 = (unsigned __int16)dword_140C0C840;
    dword_140C0C840 = 1;
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: simulated crash code %X.\n", v4);
  }
  v5 = *(_QWORD *)(a1 + 240);
  if ( !v5 )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: null loader extension.\n");
    return 0LL;
  }
  if ( *(_DWORD *)v5 < 0xED8u )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: unexpected loader extension size.\n");
    return 0LL;
  }
  v6 = *(_QWORD *)(v5 + 40);
  if ( (int)sub_140B55AEC(
              v6,
              (unsigned int)v12,
              (unsigned int)&v12[8],
              (unsigned int)&v12[16],
              (__int64)&v12[24],
              (__int64)&v12[32]) >= 0 )
  {
    v8 = 1;
    v7 = *(_DWORD *)v12;
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: a real crash happened.\n");
  }
  else
  {
    if ( !v1 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: standard retail exit point.\n");
      return 0LL;
    }
    v7 = v1;
    v8 = 0;
    *(_QWORD *)v12 = v1;
    *(__m128i *)&v12[8] = _mm_load_si128((const __m128i *)&xmmword_14001C760);
    *(_OWORD *)&v12[24] = *(_OWORD *)&v12[8];
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: a fake crash will be simulated.\n");
  }
  DbgPrintEx(
    0x5Du,
    3u,
    "CRASH TRIAGE: previous crash was %Ix %Ix %Ix %Ix %Ix.\n",
    v7,
    *(_DWORD *)&v12[8],
    *(_DWORD *)&v12[16],
    *(_DWORD *)&v12[24],
    *(_DWORD *)&v12[32]);
  xmmword_140C1B1C0 = *(_OWORD *)v12;
  qword_140C1B1E0 = *(_QWORD *)&v12[32];
  xmmword_140C1B1D0 = *(_OWORD *)&v12[16];
  if ( v8 )
  {
    if ( (unsigned int)sub_140B51F18(a1) == 1 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage skipped because it was active in previous crash or server system.\n");
      return 0LL;
    }
    if ( !(unsigned int)sub_140B53A30(a1, v6) )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: some drivers changed from previous crash.\n");
      return 0LL;
    }
  }
  if ( !(unsigned int)sub_140B53AEC(&unk_140D5E790, (unsigned int)dword_140D4E00C) )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage disabled due to invalid registry rules.\n");
    return 0LL;
  }
  if ( !(unsigned int)sub_140B53AEC(&unk_140C0D998, 48LL) )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage disabled due to invalid internal rules!\n");
    return 0LL;
  }
  v9 = 0LL;
  v11 = (_DWORD *)sub_140B5389C(&unk_140D5E790, (unsigned int)dword_140D4E00C, v7);
  if ( !v11 )
  {
    v11 = (_DWORD *)sub_140B5389C(&unk_140C0D998, 48LL, v7);
    if ( !v11 )
    {
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: crash code %Ix will not be triaged.\n", v7);
      return 0LL;
    }
  }
  if ( *v11 < 0x80000u )
  {
    v9 = sub_140B5381C(v10, (unsigned int)dword_140D4E00C);
    if ( v9 )
      DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: no `targets' rule found.\n");
  }
  if ( !v11[1] )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage disabled due to rule with null features.\n");
    return 0LL;
  }
  sub_140B53940(v11, v9);
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: triage enabled!\n");
  return 1LL;
}
