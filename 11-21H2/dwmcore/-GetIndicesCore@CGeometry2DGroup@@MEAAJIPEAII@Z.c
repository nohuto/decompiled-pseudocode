/*
 * XREFs of ?GetIndicesCore@CGeometry2DGroup@@MEAAJIPEAII@Z @ 0x180207BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry2DGroup::GetIndicesCore(
        CGeometry2DGroup *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // ebp
  __int64 i; // rdi
  __int64 v11; // rsi
  __int64 v12; // r13
  int v13; // eax
  __int64 v14; // rcx

  v4 = *((_DWORD *)this + 8);
  v5 = 0;
  *((_DWORD *)this + 8) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 + 2)) & 6;
  if ( (((unsigned __int8)v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 + 2)) & 6) & 6) == 2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 26); i = (unsigned int)(i + 1) )
    {
      v11 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * i);
      if ( v11 )
      {
        v12 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 192LL))(v11);
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *, _QWORD))(*(_QWORD *)v11 + 216LL))(
                v11,
                a2,
                a3,
                a4);
        v5 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x17Fu);
          break;
        }
        a3 += v12;
        a4 -= v12;
        a2 += (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 184LL))(v11);
      }
    }
  }
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return v5;
}
