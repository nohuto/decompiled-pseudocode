/*
 * XREFs of ?GetPropertyValue@CDragVisualAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1805F6410
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x180584908 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 *     ?GetBoundingRectangle@AccessibilityHelpers@@YAJPEBUtagRECT@@PEAUtagVARIANT@@@Z @ 0x1805F617C (-GetBoundingRectangle@AccessibilityHelpers@@YAJPEBUtagRECT@@PEAUtagVARIANT@@@Z.c)
 */

__int64 __fastcall CDragVisualAcc::GetPropertyValue(struct tagVARIANT *this, int a2, struct tagVARIANT *a3)
{
  unsigned int inited; // ebx
  IRecordInfo *pRecInfo; // rsi
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  PVOID (__stdcall *RecordCreate)(IRecordInfo *); // rbx
  bool v12; // cf
  SHORT v13; // ax
  bool v15; // zf
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  IRecordInfo *v20; // rax
  const unsigned __int16 *v21; // rcx
  unsigned __int16 *v23; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+28h] [rbp-20h]
  __int64 v25; // [rsp+30h] [rbp-18h]

  inited = 0;
  a3->vt = 0;
  pRecInfo = this[2].pRecInfo;
  if ( !pRecInfo )
    return inited;
  if ( a2 > 30013 )
  {
    v16 = a2 - 30016;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        a3->iVal = 0;
        a3->vt = 11;
        return inited;
      }
      v18 = v17 - 90;
      if ( !v18 )
        goto LABEL_27;
      v19 = v18 - 30;
      if ( v19 )
      {
        if ( v19 != 1 )
          return inited;
        if ( ((unsigned int)(*(_DWORD *)&this[2].vt - 1) > 1 || !LOBYTE(this[2].decVal.Hi32)) && this[2].lVal == 6 )
          v19 = 0;
        v12 = v19 != 0;
        goto LABEL_13;
      }
    }
    a3->vt = 11;
    v13 = -1;
    goto LABEL_39;
  }
  if ( a2 == 30013 )
  {
    v15 = *(_DWORD *)&this[2].vt == 1;
    goto LABEL_29;
  }
  v7 = a2 - 30001;
  if ( !v7 )
    return (unsigned int)AccessibilityHelpers::GetBoundingRectangle((AccessibilityHelpers *)&this[3], a3, this);
  v8 = v7 - 2;
  if ( !v8 )
  {
    a3->lVal = 50032;
    a3->vt = 3;
    return inited;
  }
  v9 = v8 - 2;
  if ( !v9 )
  {
LABEL_27:
    if ( this[2].lVal != 6 )
      goto LABEL_33;
    v15 = LOBYTE(this[2].decVal.Hi32) == 0;
LABEL_29:
    if ( v15 )
    {
      v20 = this[5].pRecInfo;
      v21 = &LocaleName;
      if ( v20 )
        v21 = (const unsigned __int16 *)v20;
      return (unsigned int)InitVariantFromString(v21, a3);
    }
LABEL_33:
    v21 = &LocaleName;
    if ( this[4].pRecInfo )
      v21 = (const unsigned __int16 *)this[4].pRecInfo;
    return (unsigned int)InitVariantFromString(v21, a3);
  }
  v10 = v9 - 4;
  if ( !v10 )
  {
    v12 = (unsigned int)(*(_DWORD *)&this[2].vt - 1) <= 1;
LABEL_13:
    a3->vt = 11;
    v13 = -v12;
LABEL_39:
    a3->iVal = v13;
    return inited;
  }
  if ( v10 == 2 )
  {
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    RecordCreate = pRecInfo->lpVtbl->RecordCreate;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
    v24 = -1LL;
    v25 = -1LL;
    inited = ((__int64 (__fastcall *)(IRecordInfo *, unsigned __int16 **))RecordCreate)(pRecInfo, &v23);
    if ( (inited & 0x80000000) == 0 )
      inited = InitVariantFromString(v23, a3);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v23);
  }
  return inited;
}
