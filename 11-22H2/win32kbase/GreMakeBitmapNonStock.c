/*
 * XREFs of GreMakeBitmapNonStock @ 0x1C0060A30
 * Callers:
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C003F8CC (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 * Callees:
 *     HmgSetOwner @ 0x1C003E5F0 (HmgSetOwner.c)
 *     HmgLockEx @ 0x1C0043B50 (HmgLockEx.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C0060B10 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     HmgLockAndModifyHandleType @ 0x1C0060B30 (HmgLockAndModifyHandleType.c)
 */

unsigned __int64 __fastcall GreMakeBitmapNonStock(__int64 a1)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rbp
  struct OBJECT *v6; // rcx

  v1 = 0LL;
  v3 = HmgLockEx(a1, 5, 0);
  v5 = *(_QWORD *)(SGDGetSessionState(v4) + 24);
  if ( v3 )
  {
    if ( (!(unsigned int)SURFACE::bDIBSection((SURFACE *)v3) || !*(_WORD *)(v3 + 100) && *(_DWORD *)(v3 + 216))
      && a1 != *(_QWORD *)(*(_QWORD *)(v5 + 3168) + 168LL)
      && (a1 & 0x800000) != 0 )
    {
      v1 = a1 & 0xFFFFFFFFFF7FFFFFuLL;
      if ( *(_DWORD *)(v3 + 168) )
      {
        if ( _bittest((const signed __int32 *)v3, 0x17u) )
          *(_WORD *)(v3 + 102) |= 0x400u;
      }
      else if ( (unsigned int)HmgLockAndModifyHandleType(v6) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 6484));
        *(_QWORD *)(v3 + 32) = v1;
        *(_WORD *)(v3 + 102) &= ~0x200u;
        HmgSetOwner(a1 & 0xFF7FFFFF, -2147483646, 5);
      }
      else
      {
        v1 = 0LL;
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 12));
  }
  return v1;
}
