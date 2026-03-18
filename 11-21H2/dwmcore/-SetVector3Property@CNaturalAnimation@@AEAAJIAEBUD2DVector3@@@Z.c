/*
 * XREFs of ?SetVector3Property@CNaturalAnimation@@AEAAJIAEBUD2DVector3@@@Z @ 0x180227CC8
 * Callers:
 *     ?SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802277E0 (-SetProperty@CNaturalAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetVector3Property(CNaturalAnimation *this, int a2, const struct D2DVector3 *a3)
{
  unsigned int v3; // ebx
  int v5; // eax
  int v6; // ecx

  v3 = 0;
  switch ( a2 )
  {
    case '(':
      *((_QWORD *)this + 45) = *(_QWORD *)a3;
      v6 = *((_DWORD *)a3 + 2);
      *((_BYTE *)this + 588) |= 0x20u;
      *((_DWORD *)this + 92) = v6;
      break;
    case ',':
      *((_QWORD *)this + 42) = *(_QWORD *)a3;
      v5 = *((_DWORD *)a3 + 2);
      *((_BYTE *)this + 588) |= 0x10u;
      *((_DWORD *)this + 86) = v5;
      break;
    case '0':
      *(_QWORD *)((char *)this + 372) = *(_QWORD *)a3;
      *((_DWORD *)this + 95) = *((_DWORD *)a3 + 2);
      break;
    default:
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024809, 0x434u);
      break;
  }
  return v3;
}
