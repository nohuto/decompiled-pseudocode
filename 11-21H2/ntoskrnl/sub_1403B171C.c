/*
 * XREFs of sub_1403B171C @ 0x1403B171C
 * Callers:
 *     sub_1403B1624 @ 0x1403B1624 (sub_1403B1624.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1403699D0 @ 0x1403699D0 (sub_1403699D0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405DE2E4 @ 0x1405DE2E4 (sub_1405DE2E4.c)
 *     sub_1405DE728 @ 0x1405DE728 (sub_1405DE728.c)
 */

void __fastcall sub_1403B171C(__int64 a1, int a2, int a3, char a4)
{
  __int64 v4; // r15
  bool v8; // cc
  __int64 v9; // r13
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // r12d
  int v13; // ecx
  __int64 v14; // rax
  const CHAR *v15; // rdx
  int v16; // r9d
  int v17; // r10d
  const CHAR *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r11
  int v21; // ecx
  __int64 v22; // r8
  ULONG v23; // r9d
  unsigned __int64 v24; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v27; // r9
  int v28; // eax
  bool v29; // zf
  int v30; // [rsp+20h] [rbp-E0h]
  int v31; // [rsp+28h] [rbp-D8h]
  __int16 v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v34; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v36; // [rsp+58h] [rbp-A8h] BYREF
  int v37; // [rsp+5Ch] [rbp-A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+60h] [rbp-A0h] BYREF
  __int16 *v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  _DWORD *v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  _DWORD v44[2]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v45[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v46[16]; // [rsp+C0h] [rbp-40h] BYREF
  int *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  int *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  int *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  int *v53; // [rsp+100h] [rbp+0h]
  __int64 v54; // [rsp+108h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 1184);
  v33 = a3;
  if ( v4 )
  {
    v8 = a3 < a2;
    if ( a3 > a2 )
    {
      if ( !a4 )
        return;
      v8 = a3 < a2;
    }
    if ( !v8 || !a4 )
    {
      v9 = *(_QWORD *)(v4 + 16);
      *(_BYTE *)(v9 + 24) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 16));
      v10 = *(_DWORD *)(v4 + 32);
      v11 = sub_1405DE2E4(a1, &v33, 0LL, 0LL);
      *(_DWORD *)(v4 + 32) = v11;
      v12 = v11 - v10;
      if ( (unsigned int)dword_140C03A00 > 5 )
      {
        v13 = *(unsigned __int16 *)(a1 + 216);
        v39 = &v32;
        v14 = *(_QWORD *)(a1 + 224);
        v41 = v44;
        v43 = v14;
        v15 = "Beginning";
        v44[0] = v13;
        if ( a4 )
          v15 = "Completed";
        v32 = 1;
        v40 = 2LL;
        v42 = 2LL;
        v44[1] = 0;
        sub_1403699D0((__int64)v45, v15);
        if ( a3 )
        {
          if ( a3 == v16 )
          {
            v18 = "PowerDeviceD0";
          }
          else if ( a3 == v17 )
          {
            v18 = "PowerDeviceD1";
          }
          else if ( a3 == 3 )
          {
            v18 = "PowerDeviceD2";
          }
          else if ( a3 == v16 + 3 )
          {
            v18 = "PowerDeviceD3";
          }
          else
          {
            v18 = "PowerDeviceMaximum";
            if ( a3 != 5 )
              v18 = "<unknown>";
          }
        }
        else
        {
          v18 = "PowerDeviceUnspecified";
        }
        sub_1403699D0((__int64)v46, v18);
        v34 = v12;
        v47 = (int *)&v34;
        v35 = *(_DWORD *)(v4 + 32);
        v49 = &v35;
        v51 = (int *)&v36;
        v19 = *(_QWORD *)(v4 + 16);
        v48 = v20;
        v50 = v20;
        v36 = v12;
        v52 = v20;
        v21 = *(_DWORD *)(v19 + 28);
        v53 = &v37;
        v37 = v12 + v21;
        v54 = v20;
        sub_14024A9B0((__int64)&dword_140C03A00, (unsigned __int8 *)&byte_1400322B8, v22, v23, v30, v31, 0xBu, &v38);
      }
      sub_1405DE728(v9, v12);
      v24 = *(unsigned __int8 *)(v9 + 24);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v9 + 16));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v24 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v27 = *((_QWORD *)CurrentPrcb + 4375);
            v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
            v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
            *(_DWORD *)(v27 + 20) &= v28;
            if ( v29 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v24);
    }
  }
}
