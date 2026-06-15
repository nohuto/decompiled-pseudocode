/*
 * XREFs of ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x1800042B4
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x1800336A0 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 * Callees:
 *     ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x180004438 (-HnsToBlocksRU@@YAJ_KKKPEAK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetPacketSizesFromConstraints(
        const struct PacketSizeConstraints *a1,
        unsigned int a2,
        unsigned __int16 a3,
        struct _GUID *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned int *a8,
        unsigned int *a9,
        unsigned int *a10,
        unsigned int *a11)
{
  unsigned int *v11; // r14
  unsigned __int64 v12; // r10
  unsigned int v15; // esi
  unsigned int v16; // r9d
  unsigned __int64 v17; // rax
  unsigned int v18; // ebp
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  unsigned int v21; // eax
  unsigned __int64 v22; // r12
  unsigned int v23; // edx
  unsigned int v24; // r8d
  unsigned int v25; // edi
  unsigned __int64 v26; // r8
  unsigned int v27; // ebx
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // esi
  unsigned int v31; // ecx
  unsigned int *v32; // r12
  const struct PacketSizeConstraints *v33; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned int v37; // eax
  unsigned int v38; // [rsp+20h] [rbp-68h] BYREF
  unsigned int *v39; // [rsp+28h] [rbp-60h]
  unsigned int *v40; // [rsp+30h] [rbp-58h]
  const struct PacketSizeConstraints *v41; // [rsp+38h] [rbp-50h]
  unsigned int *v42; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v11 = (unsigned int *)*((_QWORD *)a1 + 1);
  v12 = 5000LL;
  v40 = a8;
  v15 = 1;
  v16 = v11[1];
  v39 = a10;
  v42 = a11;
  v17 = *v11;
  v18 = a3;
  v41 = a1;
  v19 = a3;
  if ( v17 > 0x1388 )
    v12 = (unsigned int)v17;
  v20 = v16 + 1;
  v21 = a3;
  v22 = (unsigned int)v12;
  if ( a3 >= v20 )
    v19 = v20;
  if ( a3 <= v20 )
    v21 = v20;
  v23 = v21 % v19;
  while ( 1 )
  {
    v24 = v23;
    if ( !v23 )
      break;
    v23 = v19 % v23;
    v19 = v24;
  }
  v25 = -1;
  v26 = v20 * (unsigned __int64)(v18 / v19);
  if ( v26 > 0xFFFFFFFF )
  {
    v36 = 171LL;
  }
  else
  {
    v27 = (unsigned int)v26 / v18;
    if ( a9 )
      *a9 = (unsigned int)v26 / v18;
    v28 = 0LL;
    if ( v11[3] )
    {
      while ( 1 )
      {
        v35 = *(_QWORD *)&v11[6 * v28 + 4] - *(_QWORD *)&a4->Data1;
        if ( !v35 )
          v35 = *(_QWORD *)&v11[6 * v28 + 6] - *(_QWORD *)a4->Data4;
        if ( !v35 )
          break;
        v28 = (unsigned int)(v28 + 1);
        if ( (unsigned int)v28 >= v11[3] )
          goto LABEL_13;
      }
      v12 = v11[6 * v28 + 9];
      if ( v22 > v12 )
        v12 = v22;
      if ( v11[6 * v28 + 8] )
        v15 = v11[6 * v28 + 8];
    }
LABEL_13:
    if ( HnsToBlocksRU(v12, a2, v18, &v38) < 0 )
    {
      v36 = 194LL;
    }
    else
    {
      v29 = v38;
      if ( v15 > v38 )
        v29 = v15;
      v30 = v29 - 1 + v27 - (v29 - 1) % v27;
      *v39 = v30;
      if ( HnsToBlocksRU(a5, a2, v18, &v38) < 0 )
      {
        v36 = 200LL;
      }
      else
      {
        v31 = v30;
        v32 = v40;
        if ( v38 > v30 )
          v31 = v38;
        v33 = v41;
        *v40 = v27 - (v31 - 1) % v27 + v31 - 1;
        if ( !*(_BYTE *)v33 )
        {
          v25 = v27 - (v31 - 1) % v27 + v31 - 1;
LABEL_21:
          *v42 = v25;
          return 0LL;
        }
        v37 = v11[2];
        if ( v37 )
          v25 = v27 * (v37 / (v27 * v18));
        if ( HnsToBlocksRU(0x1E8480uLL, a2, v18, &v38) >= 0 )
        {
          if ( v38 > v30 )
            v30 = v38;
          if ( v25 >= v27 - (v30 - 1) % v27 + v30 - 1 )
            v25 = v27 - (v30 - 1) % v27 + v30 - 1;
          if ( v25 <= *v32 )
            v25 = *v32;
          goto LABEL_21;
        }
        v36 = 217LL;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v36,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\packetsizeconstraintsutil.cpp",
    (const char *)0x88890008LL,
    v38);
  return 2290679816LL;
}
