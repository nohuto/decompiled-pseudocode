/*
 * XREFs of sub_14090A1A0 @ 0x14090A1A0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_14038D400 @ 0x14038D400 (sub_14038D400.c)
 *     sub_1403989A4 @ 0x1403989A4 (sub_1403989A4.c)
 *     sub_1403B37B0 @ 0x1403B37B0 (sub_1403B37B0.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051EF00 @ 0x14051EF00 (sub_14051EF00.c)
 *     sub_14051F05C @ 0x14051F05C (sub_14051F05C.c)
 *     sub_14051F094 @ 0x14051F094 (sub_14051F094.c)
 *     sub_14051F13C @ 0x14051F13C (sub_14051F13C.c)
 *     sub_14051F18C @ 0x14051F18C (sub_14051F18C.c)
 *     sub_14082481C @ 0x14082481C (sub_14082481C.c)
 *     sub_1408249CC @ 0x1408249CC (sub_1408249CC.c)
 *     sub_14090A314 @ 0x14090A314 (sub_14090A314.c)
 *     sub_14090A3F0 @ 0x14090A3F0 (sub_14090A3F0.c)
 *     PoDisableSleepStates @ 0x14098C600 (PoDisableSleepStates.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14090A1A0(__int64 a1)
{
  bool v2; // al
  char v3; // bp
  bool v4; // si
  int v5; // ebx
  bool v6; // di
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0;
  v15 = 0LL;
  v13 = 0;
  v2 = sub_1403B37B0();
  v3 = byte_140C4AB90;
  v4 = v2;
  v5 = sub_14082481C(0LL, a1);
  if ( v5 < 0 )
    goto LABEL_11;
  sub_14051F13C(a1);
  v5 = sub_14051F094();
  if ( v5 < 0 )
    goto LABEL_11;
  sub_14051EF00(&v13);
  v6 = v13;
  if ( v13 )
  {
    v6 = sub_14051F05C();
    v13 = v6;
  }
  sub_14051F18C(v3);
  if ( v4 && qword_140C4C638 )
  {
    v9 = sub_1408249CC(&v14, 64LL);
    if ( v9 )
    {
      v5 = sub_14042A5E0(v9, v14);
      ExFreePoolWithTag(v9, 0x636C6148u);
    }
    else
    {
      v5 = -1073741801;
    }
    sub_14090A3F0();
    if ( v5 < 0 )
      goto LABEL_11;
    goto LABEL_18;
  }
  v5 = sub_1403989A4(v8, v7);
  if ( v5 < 0 )
  {
LABEL_11:
    sub_14082481C(0LL, 0LL);
    return (unsigned int)v5;
  }
  if ( v6 )
  {
    dword_140C4AB94 = KeQueryActiveProcessorCountEx(0xFFFFu);
    dword_140C4ABA8 = dword_140C4AB94;
    KeIpiGenericCall((PKIPI_BROADCAST_WORKER)sub_14051EFC0, 0LL);
  }
  else
  {
    sub_14090A314();
  }
  sub_14038D400(v12, v11);
  if ( v4 )
  {
LABEL_18:
    if ( !byte_140C4ABD1 )
    {
      v5 = PoDisableSleepStates(1LL, 14LL, &v15);
      if ( v5 >= 0 )
        byte_140C4ABD1 = 1;
    }
  }
  return (unsigned int)v5;
}
