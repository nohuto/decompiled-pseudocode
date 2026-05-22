/*
 * XREFs of ?InitializePropertySet@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ @ 0x18002E2FC
 * Callers:
 *     ?RuntimeClassInitialize@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionEffectFactory@234@@Z @ 0x18002E13C (-RuntimeClassInitialize@CompositionEffectBrush@Composition@UI@Windows@@QEAAJPEAVCompositor@234@P.c)
 * Callees:
 *     ??$InsertProperty@UPropertySetVector3Value@@UD2DVector3@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DVector3@@@Z @ 0x180004A7C (--$InsertProperty@UPropertySetVector3Value@@UD2DVector3@@@CompositionPropertySet@Composition@UI@.c)
 *     ??$InsertProperty@UPropertySetVector4Value@@UD2DVector4@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DVector4@@@Z @ 0x18000A55C (--$InsertProperty@UPropertySetVector4Value@@UD2DVector4@@@CompositionPropertySet@Composition@UI@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InsertProperty@UPropertySetVector2Value@@UD2DVector2@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DVector2@@@Z @ 0x18000FA50 (--$InsertProperty@UPropertySetVector2Value@@UD2DVector2@@@CompositionPropertySet@Composition@UI@.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ??$InsertProperty@UPropertySetScalarValue@@M@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBM@Z @ 0x18004C620 (--$InsertProperty@UPropertySetScalarValue@@M@CompositionPropertySet@Composition@UI@Windows@@AEAA.c)
 *     ?GetProperties@CompositionObject@Composition@UI@Windows@@UEAAPEAVCompositionPropertySet@234@_N@Z @ 0x180055540 (-GetProperties@CompositionObject@Composition@UI@Windows@@UEAAPEAVCompositionPropertySet@234@_N@Z.c)
 *     ??$InsertProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2DMatrix@@@Z @ 0x18006EE54 (--$InsertProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CompositionPropertySet@Composition@UI.c)
 *     ??$InsertProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBU_D3DCOLORVALUE@@@Z @ 0x18006F034 (--$InsertProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CompositionPropertySet@Composition@U.c)
 *     ??$InsertProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CompositionPropertySet@Composition@UI@Windows@@AEAAJPEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@_NPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180076714 (--$InsertProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CompositionPropertySet@Composi.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionEffectBrush::InitializePropertySet(
        Windows::UI::Composition::CompositionEffectBrush *this)
{
  __int64 v2; // r14
  int *Properties; // rdi
  unsigned int v4; // esi
  unsigned int v5; // r15d
  void (__fastcall *v6)(__int64, _QWORD, HSTRING *, int *, _DWORD *); // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int inserted; // eax
  unsigned int v10; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  HSTRING string; // [rsp+38h] [rbp-29h] BYREF
  int v15; // [rsp+40h] [rbp-21h] BYREF
  int v16[4]; // [rsp+48h] [rbp-19h] BYREF
  _DWORD v17[16]; // [rsp+58h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v2 = *(_QWORD *)(*((_QWORD *)this + 21) + 152LL);
  Properties = (int *)Windows::UI::Composition::CompositionObject::GetProperties(this, 1);
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    1,
    Properties[32]);
  memset_0(v17, 0, sizeof(v17));
  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  if ( !v5 )
    return 0LL;
  while ( 1 )
  {
    v6 = *(void (__fastcall **)(__int64, _QWORD, HSTRING *, int *, _DWORD *))(*(_QWORD *)v2 + 136LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v6(v2, v4, &string, &v15, v17);
    if ( v15 == 18 )
    {
      LOBYTE(v8) = 1;
      v16[0] = v17[0];
      inserted = Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetScalarValue,float>(
                   Properties,
                   string,
                   v7,
                   v8,
                   v16);
      v10 = inserted;
      if ( inserted < 0 )
      {
        v13 = 402LL;
        goto LABEL_26;
      }
      goto LABEL_8;
    }
    if ( v15 != 35 )
      break;
    inserted = Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetVector2Value,D2DVector2>(
                 (Windows::UI::Composition::CompositionObject *)Properties,
                 string,
                 v7,
                 1,
                 (__int64)v17);
    v10 = inserted;
    if ( inserted < 0 )
    {
      v13 = 410LL;
      goto LABEL_26;
    }
LABEL_8:
    WindowsDeleteString(string);
    if ( ++v4 >= v5 )
      return 0LL;
  }
  if ( v15 == 52 )
  {
    inserted = Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetVector3Value,D2DVector3>(
                 (Windows::UI::Composition::CompositionObject *)Properties,
                 string,
                 v7,
                 1,
                 (__int64)v17);
    v10 = inserted;
    if ( inserted < 0 )
    {
      v13 = 418LL;
      goto LABEL_26;
    }
    goto LABEL_8;
  }
  if ( v15 == 69 )
  {
    inserted = Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetVector4Value,D2DVector4>(
                 (Windows::UI::Composition::CompositionObject *)Properties,
                 string,
                 v7,
                 1,
                 (__int64)v17);
    v10 = inserted;
    if ( inserted < 0 )
    {
      v13 = 426LL;
      goto LABEL_26;
    }
    goto LABEL_8;
  }
  if ( v15 != 70 )
  {
    if ( v15 == 104 )
    {
      LOBYTE(v8) = 1;
      inserted = Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetMatrix3x2Value,D2D_MATRIX_3X2_F>(
                   Properties,
                   string,
                   v7,
                   v8,
                   v17);
      v10 = inserted;
      if ( inserted < 0 )
      {
        v13 = 442LL;
        goto LABEL_26;
      }
    }
    else
    {
      if ( v15 != 265 )
      {
        v10 = -2147467263;
        v13 = 456LL;
        v12 = 2147500033LL;
        goto LABEL_27;
      }
      inserted = Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetMatrix4x4Value,D2DMatrix>(
                   (Windows::UI::Composition::CompositionObject *)Properties,
                   string,
                   (__int64)v17);
      v10 = inserted;
      if ( inserted < 0 )
      {
        v13 = 450LL;
        goto LABEL_26;
      }
    }
    goto LABEL_8;
  }
  inserted = Windows::UI::Composition::CompositionPropertySet::InsertProperty<PropertySetColorValue,_D3DCOLORVALUE>(
               (Windows::UI::Composition::CompositionObject *)Properties,
               string,
               (__int64)v17);
  v10 = inserted;
  if ( inserted >= 0 )
    goto LABEL_8;
  v13 = 434LL;
LABEL_26:
  v12 = (unsigned int)inserted;
LABEL_27:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioneffectbrush.cpp",
    (const char *)v12);
  WindowsDeleteString(string);
  return v10;
}
