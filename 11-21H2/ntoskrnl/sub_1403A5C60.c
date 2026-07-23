/*
 * XREFs of sub_1403A5C60 @ 0x1403A5C60
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_1403A60FC @ 0x1403A60FC (sub_1403A60FC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403A5C60(__int64 a1)
{
  bool v1; // bl
  unsigned int v2; // esi
  int v3; // r13d
  unsigned int v4; // r12d
  int v5; // eax
  PVOID v6; // rdi
  const char *v7; // r14
  const char *v8; // r15
  const char *v9; // rdx
  const char *v10; // rcx
  const char *v11; // r11
  int v12; // r15d
  const char *v13; // r10
  const char *v14; // r9
  const char *v15; // r8
  const char *v16; // rax
  int v17; // r14d
  __int64 v18; // rax
  int v19; // ecx
  const char *v20; // [rsp+28h] [rbp-110h]
  const char *v21; // [rsp+A8h] [rbp-90h]
  char v22; // [rsp+B8h] [rbp-80h] BYREF
  char v23; // [rsp+B9h] [rbp-7Fh]
  char v24; // [rsp+BAh] [rbp-7Eh]
  char v25; // [rsp+BBh] [rbp-7Dh]
  char v26; // [rsp+BCh] [rbp-7Ch]
  char v27; // [rsp+BDh] [rbp-7Bh]
  char v28; // [rsp+BEh] [rbp-7Ah]
  char v29; // [rsp+BFh] [rbp-79h]
  char v30; // [rsp+C0h] [rbp-78h]
  char v31; // [rsp+C1h] [rbp-77h]
  PVOID P; // [rsp+C8h] [rbp-70h] BYREF
  _DWORD v33[2]; // [rsp+D0h] [rbp-68h] BYREF
  const wchar_t *v34; // [rsp+D8h] [rbp-60h]
  const char *v35; // [rsp+E0h] [rbp-58h] BYREF
  int v36; // [rsp+E8h] [rbp-50h]
  unsigned int v37; // [rsp+ECh] [rbp-4Ch]
  int v38; // [rsp+F0h] [rbp-48h]
  _DWORD v39[2]; // [rsp+F8h] [rbp-40h] BYREF
  const WCHAR *v40; // [rsp+100h] [rbp-38h]
  int v41; // [rsp+108h] [rbp-30h]
  int v42; // [rsp+10Ch] [rbp-2Ch]
  unsigned int v43; // [rsp+110h] [rbp-28h]
  unsigned int v44; // [rsp+114h] [rbp-24h]
  char v45; // [rsp+118h] [rbp-20h] BYREF

  LODWORD(v35) = 156;
  v39[1] = 0;
  v33[1] = 0;
  P = &v45;
  v22 = 0;
  v43 = 0;
  v1 = 0;
  v2 = 0;
  v42 = 0;
  v3 = 0;
  v29 = 0;
  v4 = 0;
  v23 = 0;
  v36 = 0;
  v24 = 0;
  v25 = 0;
  v41 = 0;
  v26 = 0;
  v37 = 0;
  v27 = 0;
  v44 = 0;
  v30 = 0;
  v28 = 0;
  v38 = 0;
  v31 = 0;
  DbgPrintEx(0x7Fu, 2u, "CcUpdateDynamicRegistrySettings: Updating Dynamic Registry Keys under: \"%wZ\"\n", a1 + 56);
  v39[0] = 11141288;
  v40 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  v33[0] = 2359330;
  v34 = L"TopBottomDPTEqual";
  if ( (int)sub_1403A60FC(v39, v33, &v35, &P, &v22) >= 0 )
  {
    v43 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    v1 = v43 < 3;
  }
  v33[0] = 4063292;
  v34 = L"LazyWriterPercentageOfNumProcs";
  if ( (int)sub_1403A60FC(v39, v33, &v35, &P, &v22) >= 0 )
  {
    v29 = 1;
    v42 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v33[0] = 1966108;
  v34 = L"LargeWriteSize";
  if ( (int)sub_1403A60FC(v39, v33, &v35, &P, &v22) >= 0 )
  {
    v23 = 1;
    v2 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v33[0] = 3670070;
  v34 = L"SoftThrottleLargeWriteAtPct";
  if ( (int)sub_1403A60FC(v39, v33, &v35, &P, &v22) >= 0 )
  {
    v24 = 1;
    v36 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v33[0] = 2883626;
  v34 = L"SoftThrottleDelayInMs";
  if ( (int)sub_1403A60FC(v39, v33, &v35, &P, &v22) >= 0 )
  {
    v25 = 1;
    v3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v33[0] = 2359330;
  v34 = L"MaxLazyWritePages";
  if ( (int)sub_1403A60FC(v39, v33, &v35, &P, &v22) >= 0 )
  {
    v26 = 1;
    v41 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v33[0] = 4325440;
  v34 = L"PeriodicTelemetrySampleFrequency";
  if ( (int)sub_1403A60FC(v39, v33, &v35, &P, &v22) >= 0 )
  {
    v27 = 1;
    v37 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v33[0] = 4194366;
  v34 = L"PeriodicTelemetryEventFrequency";
  if ( (int)sub_1403A60FC(v39, v33, &v35, &P, &v22) >= 0 )
  {
    v30 = 1;
    v44 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v33[0] = 4325440;
  v34 = L"PeriodicTelemetryReportFrequency";
  if ( (int)sub_1403A60FC(v39, v33, &v35, &P, &v22) >= 0 )
  {
    v28 = 1;
    v4 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
  }
  v33[0] = 2883626;
  v34 = L"DisableCacheTelemetry";
  v5 = sub_1403A60FC(v39, v33, &v35, &P, &v22);
  v6 = P;
  v35 = "not found";
  v7 = "valid";
  if ( v5 >= 0 )
  {
    v18 = *((unsigned int *)P + 2);
    v8 = "valid";
    v31 = 1;
    v38 = *(_DWORD *)((char *)P + v18);
  }
  else
  {
    v8 = "not found";
  }
  v21 = v8;
  v9 = "valid";
  v10 = "valid";
  if ( !v28 )
    v9 = "not found";
  v11 = "valid";
  v12 = v41;
  v13 = "valid";
  if ( !v27 )
    v10 = "not found";
  v14 = "valid";
  if ( !v26 )
    v11 = "not found";
  if ( !v25 )
    v13 = "not found";
  if ( !v24 )
    v14 = "not found";
  v15 = "valid";
  if ( !v23 )
    v15 = "not found";
  v16 = "valid";
  if ( !v29 )
    v16 = v35;
  if ( !v1 )
    v7 = v35;
  v20 = v7;
  v17 = v43;
  DbgPrintEx(
    0x7Fu,
    2u,
    "CcUpdateDynamicRegistrySettings: \n"
    "\tTopBottom                      : 0x%04lx(%s)\n"
    "\tLazyWriterPct                  : 0x%04lx(%s) (unsupported)\n"
    "\tLargeWriteSize                 : 0x%04lx(%s)\n"
    "\tSoftThrottleAt                 : 0x%04lx(%s)\n"
    "\tSoftThrottleDelay              : 0x%04lx(%s)\n"
    "\tMaxLazyWritePages              : 0x%04lx(%s)\n"
    "\tPeriodicTelmetrySampleFrequency: 0x%04lx(%s)\n"
    "\tPeriodicTelmetryReportFrequency: 0x%04lx(%s)\n"
    "\tDisableCacheTelemetry          : 0x%04lx(%s)\n",
    v43,
    v20,
    v42,
    v16,
    v2,
    v15,
    v36,
    v14,
    v3,
    v13,
    v41,
    v11,
    v37,
    v10,
    v4,
    v9,
    v38,
    v21);
  if ( v22 )
    ExFreePoolWithTag(v6, 0x78666343u);
  if ( v1 )
    dword_140D011A4 = v17;
  if ( v23 )
  {
    if ( !v2 || (dword_140C54C6C = v2 << 10, v2 << 10 <= v2) )
      dword_140C54C6C = 0;
  }
  if ( v24 )
  {
    v19 = 0;
    if ( (unsigned int)(v36 - 1) <= 0x63 )
      v19 = v36;
    dword_140C54C64 = v19;
  }
  if ( v25 && v3 )
    dword_140C54C74 = v3;
  if ( v26 && (unsigned int)(v12 - 1) <= 0x7FFF )
    dword_140C097B0 = v12;
  if ( v27 && v37 )
    stru_140C498A0.QuadPart = -10000000LL * v37;
  if ( v30 && v44 )
    qword_140C498A8 = 10000000LL * v44;
  if ( v28 && v4 )
    qword_140C498B0 = 10000000LL * v4;
  if ( v31 )
    byte_140C498C1 = v38 != 0;
}
