/*
 * XREFs of NtInputSpaceRegionFromPoint @ 0x1C0153B90
 * Callers:
 *     <none>
 * Callees:
 *     ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C003C0BC (-RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C003C1A0 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ??1CLockedInputSpace@@QEAA@XZ @ 0x1C00D8850 (--1CLockedInputSpace@@QEAA@XZ.c)
 *     ?GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z @ 0x1C01E3A20 (-GetInputSpace@InputConfig@@SA_NU_LUID@@PEAVCLockedInputSpace@@@Z.c)
 */

__int64 __fastcall NtInputSpaceRegionFromPoint(struct _LUID a1, struct tagPOINT a2, _OWORD *a3)
{
  bool InputSpace; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  _OWORD *v11; // rsi
  PERESOURCE *v13[2]; // [rsp+30h] [rbp-108h] BYREF
  PERESOURCE *v14[4]; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v15; // [rsp+60h] [rbp-D8h]
  __int128 v16; // [rsp+70h] [rbp-C8h]
  __int128 v17; // [rsp+80h] [rbp-B8h]
  __int128 v18; // [rsp+90h] [rbp-A8h]
  __int128 v19; // [rsp+A0h] [rbp-98h]
  __int128 v20; // [rsp+B0h] [rbp-88h]
  __int128 v21; // [rsp+C0h] [rbp-78h]
  __int128 v22; // [rsp+D0h] [rbp-68h]
  __int128 v23; // [rsp+E0h] [rbp-58h]
  __int128 v24; // [rsp+F0h] [rbp-48h]
  __int128 v25; // [rsp+100h] [rbp-38h]
  __int128 v26; // [rsp+110h] [rbp-28h]
  PERESOURCE v27; // [rsp+120h] [rbp-18h]

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v14);
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v13);
  InputSpace = InputConfig::GetInputSpace(a1, (struct CLockedInputSpace *)v14);
  v10 = 0;
  if ( InputSpace
    && InputConfig::RegionFromPoint((const struct CLockedInputSpace *)v14, a2, (struct CLockedInputSpaceRegion *)v13) )
  {
    v15 = *(_OWORD *)v13[0];
    v16 = *((_OWORD *)v13[0] + 1);
    v17 = *((_OWORD *)v13[0] + 2);
    v18 = *((_OWORD *)v13[0] + 3);
    v19 = *((_OWORD *)v13[0] + 4);
    v20 = *((_OWORD *)v13[0] + 5);
    v21 = *((_OWORD *)v13[0] + 6);
    v22 = *((_OWORD *)v13[0] + 7);
    v23 = *((_OWORD *)v13[0] + 8);
    v24 = *((_OWORD *)v13[0] + 9);
    v25 = *((_OWORD *)v13[0] + 10);
    v26 = *((_OWORD *)v13[0] + 11);
    v27 = v13[0][24];
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    *a3 = v15;
    a3[1] = v16;
    a3[2] = v17;
    a3[3] = v18;
    a3[4] = v19;
    a3[5] = v20;
    a3[6] = v21;
    v11 = a3 + 8;
    *(v11 - 1) = v22;
    *v11 = v23;
    v11[1] = v24;
    v11[2] = v25;
    v11[3] = v26;
    *((_QWORD *)v11 + 8) = v27;
    v10 = 1;
  }
  else
  {
    UserSetLastError(87LL, v7, v8, v9);
  }
  CLockedInputSpace::~CLockedInputSpace(v13);
  CLockedInputSpace::~CLockedInputSpace(v14);
  return v10;
}
