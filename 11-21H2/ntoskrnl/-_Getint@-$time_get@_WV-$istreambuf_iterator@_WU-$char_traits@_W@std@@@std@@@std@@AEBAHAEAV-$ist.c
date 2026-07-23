/*
 * XREFs of ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644
 * Callers:
 *     sub_140235AAC @ 0x140235AAC (sub_140235AAC.c)
 *     sub_140245DF4 @ 0x140245DF4 (sub_140245DF4.c)
 *     sub_140249930 @ 0x140249930 (sub_140249930.c)
 *     sub_14024A0FC @ 0x14024A0FC (sub_14024A0FC.c)
 *     sub_14024DE5C @ 0x14024DE5C (sub_14024DE5C.c)
 *     sub_140268998 @ 0x140268998 (sub_140268998.c)
 *     sub_14026C124 @ 0x14026C124 (sub_14026C124.c)
 *     sub_14027B0B8 @ 0x14027B0B8 (sub_14027B0B8.c)
 *     sub_140291FC0 @ 0x140291FC0 (sub_140291FC0.c)
 *     sub_1402DAEB0 @ 0x1402DAEB0 (sub_1402DAEB0.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     DnsPrint_RpcZoneInfo @ 0x1402E97D4 (DnsPrint_RpcZoneInfo.c)
 *     sub_1402EA95C @ 0x1402EA95C (sub_1402EA95C.c)
 *     sub_140323D70 @ 0x140323D70 (sub_140323D70.c)
 *     sub_140338080 @ 0x140338080 (sub_140338080.c)
 *     sub_14036CD34 @ 0x14036CD34 (sub_14036CD34.c)
 *     sub_1403AD0A8 @ 0x1403AD0A8 (sub_1403AD0A8.c)
 *     sub_140596090 @ 0x140596090 (sub_140596090.c)
 *     sub_1405A47A0 @ 0x1405A47A0 (sub_1405A47A0.c)
 *     sub_1405A4C68 @ 0x1405A4C68 (sub_1405A4C68.c)
 *     sub_1405A4FB8 @ 0x1405A4FB8 (sub_1405A4FB8.c)
 *     sub_1405A7708 @ 0x1405A7708 (sub_1405A7708.c)
 *     sub_1405AC670 @ 0x1405AC670 (sub_1405AC670.c)
 *     sub_1407BF070 @ 0x1407BF070 (sub_1407BF070.c)
 *     sub_140829B50 @ 0x140829B50 (sub_140829B50.c)
 *     sub_140AF3FFC @ 0x140AF3FFC (sub_140AF3FFC.c)
 *     sub_140B51C0C @ 0x140B51C0C (sub_140B51C0C.c)
 * Callees:
 *     sub_1402EA7E4 @ 0x1402EA7E4 (sub_1402EA7E4.c)
 *     sub_1402F374C @ 0x1402F374C (sub_1402F374C.c)
 *     sub_1402F3A88 @ 0x1402F3A88 (sub_1402F3A88.c)
 *     sub_1402F3FE0 @ 0x1402F3FE0 (sub_1402F3FE0.c)
 *     sub_14039DB1C @ 0x14039DB1C (sub_14039DB1C.c)
 *     sub_14039E48C @ 0x14039E48C (sub_14039E48C.c)
 *     sub_14039E55C @ 0x14039E55C (sub_14039E55C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140420AD0 @ 0x140420AD0 (sub_140420AD0.c)
 *     sub_14045F6DE @ 0x14045F6DE (sub_14045F6DE.c)
 *     sub_14063F75C @ 0x14063F75C (sub_14063F75C.c)
 */

__int64 __fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  char v4; // si
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  int v12; // eax
  int v13; // r8d
  char v14; // r11
  int v15; // r9d
  char v16; // r10
  __int64 v17; // rcx
  unsigned __int8 v18; // si
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v22; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // bl
  __int64 v26; // r10
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  __int64 v29; // r8
  int v30; // eax
  unsigned __int8 v31; // [rsp+40h] [rbp-40h] BYREF
  char v32; // [rsp+41h] [rbp-3Fh] BYREF
  _BYTE v33[6]; // [rsp+42h] [rbp-3Eh] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-38h] BYREF
  __int64 v35; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-28h] BYREF
  __int128 v37; // [rsp+60h] [rbp-20h]

  v35 = 0LL;
  v32 = 0;
  v33[0] = 0;
  v31 = 0;
  v4 = 0;
  if ( (unsigned __int8)sub_1402F3FE0(0, a2, a3, (unsigned int)&v32, (__int64)&v31) )
  {
    if ( ((1 << a2) & 0xA) != 0 )
    {
      if ( byte_140D0688A )
      {
        v17 = *((_QWORD *)KeGetCurrentThread() + 23);
        if ( !*(_BYTE *)(v17 + 912) )
        {
          if ( (byte_140D0688A & 2) != 0 )
          {
            *(_QWORD *)&v37 = 1LL;
            *((_QWORD *)&v37 + 1) = a1;
            _EAX = 0;
            __asm { invpcid eax, [rbp+var_20] }
          }
          else
          {
            sub_140420AD0(v17, 15LL, v7, v8);
          }
        }
      }
    }
    __invlpg((void *)a1);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v18 = v31;
      if ( v31 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v22 = *((_QWORD *)CurrentPrcb + 4375);
        v18 = v31;
        v23 = ~(unsigned __int16)(-1LL << (v31 + 1));
        v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
        *(_DWORD *)(v22 + 20) &= v23;
        if ( v24 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    else
    {
      v18 = v31;
    }
    __writecr8(v18);
    v4 = 1;
  }
  result = sub_1402F3A88(a1, a2);
  if ( (_BYTE)result || v32 )
  {
    sub_14039E48C(a2, &v35, v33);
    v12 = sub_14039E55C(a3);
    LOBYTE(v13) = v33[0];
    LOBYTE(v15) = v14;
    v36 = a1 & 0xFFFFFFFFFFFFF000uLL;
    result = sub_14039DB1C(v35, v12, v13, v15, v16, 1, (__int64)&v36);
    v4 |= result;
  }
  if ( v4 )
  {
    if ( a2 == 4 )
    {
      LOBYTE(v10) = 1;
      result = sub_1402F374C(v10);
    }
  }
  else
  {
    result = sub_1402EA7E4(a1, a2, a3);
  }
  v11 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( byte_140D05002 )
  {
    v34 = v11;
    result = sub_14045F6DE(1LL, &v34, a2);
  }
  if ( dword_140D01470 )
  {
    v34 = v11;
    v25 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v25 <= 0xFu )
    {
      v26 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v26 + 20) |= (-1 << (v25 + 1)) & 0xFFFC;
    }
    sub_14063F75C(1LL, &v34, a2);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v27 = KeGetCurrentIrql();
        if ( v27 <= 0xFu && v25 <= 0xFu && v27 >= 2u )
        {
          v28 = KeGetCurrentPrcb();
          v29 = *((_QWORD *)v28 + 4375);
          v30 = ~(unsigned __int16)(-1LL << (v25 + 1));
          v24 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
          *(_DWORD *)(v29 + 20) &= v30;
          if ( v24 )
            sub_140418E4C(v28);
        }
      }
    }
    result = v25;
    __writecr8(v25);
  }
  return result;
}
