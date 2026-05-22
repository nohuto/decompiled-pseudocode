/*
 * XREFs of ?GetAnimatablePropertyInfo@Visual@Composition@UI@Windows@@UEAA_NPEAUHSTRING__@@PEAW4AnimationBindingDirection@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18005B860
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ @ 0x18005B258 (-EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1800F9140 (ModuleFailFastForHRESULT.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x180148F20 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 */

char __fastcall Windows::UI::Composition::Visual::GetAnimatablePropertyInfo(
        Windows::UI::Composition::Visual *this,
        HSTRING string,
        enum Windows::UI::Composition::AnimationBindingDirection *a3,
        struct ExpressionObjectPropertyInfo *a4,
        enum DCOMPOSITION_EXPRESSION_TYPE *a5)
{
  PCWSTR StringRawBuffer; // rdi
  const wchar_t ***v10; // rbx
  const wchar_t **v11; // rsi
  const wchar_t *v12; // rdx
  bool v13; // cl
  bool v14; // al
  int v15; // eax
  PCWSTR v16; // rdi
  const wchar_t ***v17; // rbx
  const wchar_t *v18; // rdx
  bool v19; // cl
  bool v21; // al
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rbp
  unsigned int v25; // edi
  __int64 v26; // r14
  HSTRING v27; // rcx
  PCWSTR v28; // rbx
  __int64 v29; // rcx
  int v30; // edx
  int *v31; // rcx
  PCWSTR v32; // rdx
  bool v33; // cl
  bool v34; // al
  int v35; // eax
  _QWORD *v36; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v10 = (const wchar_t ***)&Windows::UI::Composition::Visual::k_rgAnimDef;
  do
  {
    v11 = *v10;
    v12 = **v10;
    v13 = !StringRawBuffer || !*StringRawBuffer;
    v14 = !v12 || !*v12;
    if ( v13 )
    {
      v15 = v14 - 1;
    }
    else
    {
      if ( v14 )
        goto LABEL_15;
      v15 = _wcsicmp_l(StringRawBuffer, v12, 0LL);
      if ( (unsigned int)(v15 + 1) > 2 )
        goto LABEL_15;
    }
    if ( !v15 )
    {
      *(_DWORD *)a3 = *((_DWORD *)v11 + 10);
      *(_DWORD *)a4 = *((_DWORD *)this + 32);
      *((_DWORD *)a4 + 1) = *((_DWORD *)v11 + 2);
      *(_DWORD *)a5 = *((_DWORD *)v11 + 4);
      return 1;
    }
LABEL_15:
    ++v10;
  }
  while ( v10 != (const wchar_t ***)&unk_1801BE3B8 );
  v16 = WindowsGetStringRawBuffer(string, 0LL);
  v17 = (const wchar_t ***)&Windows::UI::Composition::ComponentTransform3D::k_rgAnimDef;
  while ( 2 )
  {
    v18 = **v17;
    v19 = !v16 || !*v16;
    v21 = !v18 || !*v18;
    if ( v19 )
    {
      v22 = v21 - 1;
      break;
    }
    if ( v21 || (v22 = _wcsicmp_l(v16, v18, 0LL), (unsigned int)(v22 + 1) > 2) )
    {
LABEL_31:
      if ( ++v17 != (const wchar_t ***)&Windows::UI::Composition::CompositionRectangleGeometry::s_InterfaceType )
        continue;
      v23 = (*(__int64 (__fastcall **)(Windows::UI::Composition::Visual *, _QWORD))(*(_QWORD *)this + 112LL))(this, 0LL);
      v24 = v23;
      if ( !v23 )
        return 0;
      *(_DWORD *)a3 = 0;
      v25 = 0;
      *(_DWORD *)a5 = 0;
      if ( !*(_DWORD *)(v23 + 200) )
        return 0;
      while ( 1 )
      {
        v26 = 8LL * v25;
        v27 = *(HSTRING *)(v26 + *(_QWORD *)(v24 + 176));
        if ( v27 )
          v28 = WindowsGetStringRawBuffer(v27, 0LL);
        else
          v28 = 0LL;
        if ( string )
          v32 = WindowsGetStringRawBuffer(string, 0LL);
        else
          v32 = 0LL;
        v33 = !v28 || !*v28;
        v34 = !v32 || !*v32;
        if ( v33 )
        {
          v35 = v34 - 1;
        }
        else
        {
          if ( v34 )
            goto LABEL_59;
          v35 = _wcsicmp_l(v28, v32, 0LL);
          if ( (unsigned int)(v35 + 1) > 2 )
            goto LABEL_59;
        }
        if ( !v35 )
        {
          *(_DWORD *)a4 = *(_DWORD *)(v24 + 128);
          *((_DWORD *)a4 + 1) = v25;
          if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                                   v24 + 208,
                                   v25) )
            ModuleFailFastForHRESULT(2147942487LL, retaddr);
          *(_DWORD *)a5 = *(_DWORD *)(v26 + *v36);
          *(_DWORD *)a3 = 3;
          return 1;
        }
LABEL_59:
        if ( ++v25 >= *(_DWORD *)(v24 + 200) )
          return 0;
      }
    }
    break;
  }
  if ( v22 )
    goto LABEL_31;
  *(_DWORD *)a3 = *((_DWORD *)*v17 + 10);
  *((_DWORD *)a4 + 1) = *((_DWORD *)*v17 + 2);
  *((_DWORD *)a4 + 2) = *((_DWORD *)*v17 + 3);
  *(_DWORD *)a5 = *((_DWORD *)*v17 + 4);
  if ( (int)Windows::UI::Composition::Visual::EnsureComponentTransform(this) < 0 )
    return 0;
  v29 = *((_QWORD *)this + 14);
  if ( (*(_DWORD *)(v29 + 4) & 0x1000000) != 0 )
  {
    v30 = *(_DWORD *)(v29 + 12);
    v31 = (int *)(v29 + 12);
    if ( (v30 & 0x7F000000) != 0x8000000 )
    {
      do
      {
        v31 = (int *)((char *)v31 + (v30 & 0xFFFFFF) + 4);
        v30 = *v31;
      }
      while ( (*v31 & 0x7F000000) != 0x8000000 );
    }
    *(_DWORD *)a4 = *(_DWORD *)(*(_QWORD *)(v31 + 1) + 128LL);
    return 1;
  }
  else
  {
    *(_DWORD *)a4 = MEMORY[0x80];
    return 1;
  }
}
