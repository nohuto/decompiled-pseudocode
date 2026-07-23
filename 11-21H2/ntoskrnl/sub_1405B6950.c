/*
 * XREFs of sub_1405B6950 @ 0x1405B6950
 * Callers:
 *     sub_1405F94CC @ 0x1405F94CC (sub_1405F94CC.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_1405B6950(char *a1, unsigned int a2, int a3)
{
  __int64 v4; // rdi
  PHYSICAL_ADDRESS v6; // r14
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // [rsp+20h] [rbp-A9h]
  int v11; // [rsp+28h] [rbp-A1h]
  int v12; // [rsp+40h] [rbp-89h] BYREF
  int v13; // [rsp+44h] [rbp-85h] BYREF
  char *v14; // [rsp+48h] [rbp-81h] BYREF
  PHYSICAL_ADDRESS v15; // [rsp+50h] [rbp-79h] BYREF
  __int64 v16; // [rsp+58h] [rbp-71h] BYREF
  __int64 v17; // [rsp+60h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+70h] [rbp-59h] BYREF
  char **v19; // [rsp+90h] [rbp-39h]
  int v20; // [rsp+98h] [rbp-31h]
  int v21; // [rsp+9Ch] [rbp-2Dh]
  int *v22; // [rsp+A0h] [rbp-29h]
  int v23; // [rsp+A8h] [rbp-21h]
  int v24; // [rsp+ACh] [rbp-1Dh]
  int *v25; // [rsp+B0h] [rbp-19h]
  int v26; // [rsp+B8h] [rbp-11h]
  int v27; // [rsp+BCh] [rbp-Dh]
  PHYSICAL_ADDRESS *v28; // [rsp+C0h] [rbp-9h]
  int v29; // [rsp+C8h] [rbp-1h]
  int v30; // [rsp+CCh] [rbp+3h]
  __int64 *v31; // [rsp+D0h] [rbp+7h]
  int v32; // [rsp+D8h] [rbp+Fh]
  int v33; // [rsp+DCh] [rbp+13h]
  __int64 *v34; // [rsp+E0h] [rbp+17h]
  int v35; // [rsp+E8h] [rbp+1Fh]
  int v36; // [rsp+ECh] [rbp+23h]

  v4 = a2;
  if ( *(_QWORD *)&qword_140C53448 )
  {
    v6.QuadPart = MmGetPhysicalAddress(a1).QuadPart / 4096;
    if ( ((v4 + 4095 + ((unsigned __int16)a1 & 0xFFF)) & 0xFFFFFFFFFFFFF000uLL) != 0x1000 )
      MmGetPhysicalAddress(&a1[(unsigned int)(v4 - 1)]);
    if ( **(_DWORD **)&qword_140C53448 > 5u )
    {
      if ( sub_1402A2000(*(__int64 *)&qword_140C53448, 0x400000000002LL) )
      {
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v30 = 0;
        v33 = 0;
        v36 = 0;
        v19 = &v14;
        v22 = &v12;
        v25 = &v13;
        v28 = &v15;
        v31 = &v16;
        v34 = &v17;
        v16 = v8;
        v20 = 8;
        v23 = 4;
        v26 = 4;
        v29 = 8;
        v32 = 8;
        v35 = 8;
        v14 = a1;
        v12 = v4;
        v13 = a3;
        v15 = v6;
        v17 = 0x1000000LL;
        sub_14024A9B0(v9, (unsigned __int8 *)&byte_14002DD57, v7, 1u, v10, v11, 8u, &v18);
      }
    }
  }
}
