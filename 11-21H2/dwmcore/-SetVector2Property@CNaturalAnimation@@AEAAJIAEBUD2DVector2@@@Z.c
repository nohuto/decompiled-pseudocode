/*
 * XREFs of ?SetVector2Property@CNaturalAnimation@@AEAAJIAEBUD2DVector2@@@Z @ 0x180227C44
 * Callers:
 *     ?SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802277E0 (-SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetVector2Property(CNaturalAnimation *this, int a2, const struct D2DVector2 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // xmm0_8
  __int64 v5; // xmm0_8

  v3 = 0;
  switch ( a2 )
  {
    case '(':
      v5 = *(_QWORD *)a3;
      *((_BYTE *)this + 588) |= 0x20u;
      *((_QWORD *)this + 45) = v5;
      break;
    case ',':
      v4 = *(_QWORD *)a3;
      *((_BYTE *)this + 588) |= 0x10u;
      *((_QWORD *)this + 42) = v4;
      break;
    case '0':
      *(_QWORD *)((char *)this + 372) = *(_QWORD *)a3;
      break;
    default:
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024809, 0x418u);
      break;
  }
  return v3;
}
