/*
 * XREFs of sub_1C00130BC @ 0x1C00130BC
 * Callers:
 *     sub_1C0012644 @ 0x1C0012644 (sub_1C0012644.c)
 * Callees:
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C001175C @ 0x1C001175C (sub_1C001175C.c)
 *     sub_1C001ABEC @ 0x1C001ABEC (sub_1C001ABEC.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C004D83C @ 0x1C004D83C (sub_1C004D83C.c)
 */

void __fastcall sub_1C00130BC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // [rsp+20h] [rbp-E0h]
  int v9; // [rsp+28h] [rbp-D8h]
  char v10; // [rsp+40h] [rbp-C0h] BYREF
  char v11; // [rsp+41h] [rbp-BFh] BYREF
  char v12; // [rsp+42h] [rbp-BEh] BYREF
  int v13; // [rsp+44h] [rbp-BCh] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  __int64 v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  int *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  char *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  char *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  char *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  int *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  int *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  __int64 *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]

  if ( sub_1C0008B84(a1) )
  {
    v2 = *(unsigned int *)(*(_QWORD *)(a1 + 1792) + 32LL);
    if ( (v2 & 0x100) != 0 && (v2 & 0x200) != 0 && (unsigned int)dword_1C00930C8 > 5 )
    {
      if ( (unsigned __int8)sub_1C001ABEC(v2, 0x400000000000LL) )
      {
        v4 = *(_QWORD *)(a1 + 24);
        v19 = 16LL;
        v21 = 16LL;
        v18 = v4 + 5000;
        v20 = a1 + 2024;
        v13 = *(_DWORD *)(v4 + 56);
        v22 = &v13;
        v10 = *(_BYTE *)(a1 + 96);
        v24 = &v10;
        v11 = *(_BYTE *)(a1 + 97);
        v26 = &v11;
        v12 = *(_BYTE *)(a1 + 98);
        v28 = &v12;
        v23 = 4LL;
        v25 = 1LL;
        v27 = 1LL;
        v29 = 1LL;
        v14 = *(_DWORD *)(v3 + 28);
        v30 = &v14;
        v31 = 4LL;
        v15 = sub_1C004D83C(a1);
        v33 = 4LL;
        v32 = &v15;
        v34 = &v16;
        v16 = v5;
        v35 = 8LL;
        sub_1C001175C(v6, (unsigned __int8 *)dword_1C0086A8A, v7, v5, v8, v9, 0xBu, &v17);
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  }
}
