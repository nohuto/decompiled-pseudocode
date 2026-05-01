/*
 * XREFs of ?HampRmContextCreate@@YAJPEAU_HAM_ACTIVITY@@PEAPEAX@Z @ 0x1800148D4
 * Callers:
 *     ?HampActAllocateState@@YAJPEAU_HAM_ACTIVITY@@K@Z @ 0x180014880 (-HampActAllocateState@@YAJPEAU_HAM_ACTIVITY@@K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18004A9B8 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall HampRmContextCreate(struct _HAM_ACTIVITY *a1, void **a2)
{
  _QWORD *v4; // r8
  __int64 result; // rax

  v4 = operator new(0x20uLL);
  result = 0LL;
  if ( !v4 )
    return 3221225495LL;
  v4[2] = -1LL;
  *v4 = &HAM_ACTIVITY_RM_CONTEXT::`vftable';
  v4[1] = a1;
  *((_DWORD *)v4 + 6) = 1;
  *a2 = v4;
  return result;
}
