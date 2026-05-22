/*
 * XREFs of ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x1801B3254
 * Callers:
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x1801B2FD0 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ @ 0x1801B2CE8 (--Econst_iterator@SegmentCollection@Path@@QEAAAEAV012@XZ.c)
 */

__int64 __fastcall CPathData::PushIntoSink(CPathData *this, struct ID2D1GeometrySink *a2)
{
  char *v2; // rbx
  char *v4; // rdi
  unsigned int v5; // r14d
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // xmm1_4
  __int64 v9; // rax
  bool v10; // zf
  int v11; // xmm0_4
  __int64 v12; // rdx
  char *v14; // [rsp+30h] [rbp-40h] BYREF
  __int128 v15; // [rsp+38h] [rbp-38h] BYREF
  int v16; // [rsp+48h] [rbp-28h]
  BOOL v17; // [rsp+4Ch] [rbp-24h]
  BOOL v18; // [rsp+50h] [rbp-20h]
  __int128 v19; // [rsp+58h] [rbp-18h] BYREF

  v2 = (char *)*((_QWORD *)this + 2);
  v4 = (char *)*((_QWORD *)this + 3);
  v5 = 0;
  v14 = v2;
  while ( v2 != v4 )
  {
    if ( v2[1] < 0 )
    {
      v6 = (unsigned __int8)v2[1];
      LODWORD(v6) = v6 & 0xFFFFFF7F;
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 32LL))(a2, v6);
    }
    if ( *v2 )
    {
      switch ( *v2 )
      {
        case 1:
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, bool))(*(_QWORD *)a2 + 64LL))(a2, v2[2] != 0);
          break;
        case 2:
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a2 + 80LL))(a2, *((_QWORD *)v2 + 1));
          break;
        case 3:
          v10 = v2[2] == 0;
          v15 = *(_OWORD *)(v2 + 8);
          v11 = *((_DWORD *)v2 + 6);
          v17 = !v10;
          v10 = v2[3] == 0;
          v16 = v11;
          v18 = !v10;
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(*(_QWORD *)a2 + 112LL))(a2, &v15);
          break;
        case 4:
          v9 = *(_QWORD *)a2;
          v19 = *(_OWORD *)(v2 + 8);
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(v9 + 96))(a2, &v19);
          break;
        case 5:
          v7 = *(_QWORD *)a2;
          v8 = *((_DWORD *)v2 + 7);
          v15 = *(_OWORD *)(v2 + 8);
          v16 = *((_DWORD *)v2 + 6);
          v17 = v8;
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int128 *))(v7 + 88))(a2, &v15);
          break;
        default:
          v5 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, 0x80070057, 0x1CCu, 0LL);
          return v5;
      }
    }
    else
    {
      if ( v2[2] < 0 )
      {
        v12 = (unsigned __int8)v2[2];
        LODWORD(v12) = v12 & 0xFFFFFF7F;
        (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 24LL))(a2, v12);
      }
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD, bool))(*(_QWORD *)a2 + 40LL))(
        a2,
        *((_QWORD *)v2 + 1),
        v2[3] != 0);
    }
    Path::SegmentCollection::const_iterator::operator++(&v14);
    v2 = v14;
  }
  return v5;
}
