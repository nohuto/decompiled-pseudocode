/*
 * XREFs of ?GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVParameterEntry@@PEA_N@Z @ 0x18003FDB4
 * Callers:
 *     ?SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z @ 0x18003DD58 (-SetScalarParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@M@Z.c)
 *     ?TryGetParameterType@CompositionAnimation@Composition@UI@Windows@@QEAA_NPEAUHSTRING__@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18003F980 (-TryGetParameterType@CompositionAnimation@Composition@UI@Windows@@QEAA_NPEAUHSTRING__@@PEAW4DCOM.c)
 *     ?SetExpressionReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAUIAnimationObject@234@@Z @ 0x18003FA48 (-SetExpressionReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__.c)
 *     ?SetMatrix4x4Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUMatrix4x4@Numerics@Foundation@4@@Z @ 0x18003FB64 (-SetMatrix4x4Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUMatr.c)
 *     ?TryGetParameterEntry@CompositionAnimation@Composition@UI@Windows@@AEAA?AW4CompositionGetValueStatus@234@PEAUHSTRING__@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVParameterEntry@@@Z @ 0x18003FD50 (-TryGetParameterEntry@CompositionAnimation@Composition@UI@Windows@@AEAA-AW4CompositionGetValueSt.c)
 *     ?SetBooleanParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@_N@Z @ 0x18014F4F0 (-SetBooleanParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@_N@Z.c)
 *     ?SetColorParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@U_D3DCOLORVALUE@@@Z @ 0x18014F66C (-SetColorParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@U_D3DCOLORVA.c)
 *     ?SetMatrix3x2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUMatrix3x2@Numerics@Foundation@4@@Z @ 0x18014F948 (-SetMatrix3x2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUMatr.c)
 *     ?SetQuaternionParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUQuaternion@Numerics@Foundation@4@@Z @ 0x18014FA88 (-SetQuaternionParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUQua.c)
 *     ?SetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVCompositionObject@234@_N@Z @ 0x18014FBA0 (-SetReferenceParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@PEAVComp.c)
 *     ?SetVector2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector2@Numerics@Foundation@4@@Z @ 0x18014FD04 (-SetVector2Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 *     ?SetVector4Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector4@Numerics@Foundation@4@@Z @ 0x18014FE58 (-SetVector4Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 * Callees:
 *     ?ClearMatrixValue@ParameterEntry@@QEAAXXZ @ 0x180029BFC (-ClearMatrixValue@ParameterEntry@@QEAAXXZ.c)
 *     ??1ParameterEntry@@QEAA@XZ @ 0x18003FEF4 (--1ParameterEntry@@QEAA@XZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

void __fastcall Windows::UI::Composition::CompositionAnimation::GetElementForKey(
        Windows::UI::Composition::CompositionAnimation *this,
        HSTRING a2,
        char a3,
        struct ParameterEntry **a4,
        bool *a5)
{
  struct _RTL_GENERIC_TABLE *v5; // r14
  struct ParameterEntry *v9; // rbx
  Microsoft::WRL2::NestableRuntimeClass *v10; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v11; // rcx
  bool v12; // zf
  unsigned __int64 v13; // rcx
  struct ParameterEntry *inserted; // rax
  unsigned __int8 NewElement[8]; // [rsp+20h] [rbp-50h] BYREF
  HSTRING newString; // [rsp+28h] [rbp-48h] BYREF
  HSTRING Buffer; // [rsp+30h] [rbp-40h] BYREF
  int v18; // [rsp+38h] [rbp-38h]
  Microsoft::WRL2::NestableRuntimeClass *v19[2]; // [rsp+40h] [rbp-30h]
  int v20; // [rsp+50h] [rbp-20h]

  v5 = (struct _RTL_GENERIC_TABLE *)((char *)this + 192);
  newString = 0LL;
  v18 = 0;
  v20 = 0;
  Buffer = a2;
  NewElement[0] = 0;
  *(_OWORD *)v19 = 0LL;
  v9 = (struct ParameterEntry *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 192), &Buffer);
  ParameterEntry::ClearMatrixValue((ParameterEntry *)&Buffer);
  v10 = v19[1];
  if ( v19[1] )
  {
    v19[1] = 0LL;
    (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = v19[0];
  if ( v19[0] )
  {
    v19[0] = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
  }
  if ( !v9 && a3 )
  {
    v18 = 0;
    v20 = 0;
    *(_OWORD *)v19 = 0LL;
    if ( WindowsDuplicateString(a2, &newString) < 0 )
      Microsoft::WRL2::FailFast::OutOfMemory(v13);
    Buffer = newString;
    inserted = (struct ParameterEntry *)RtlInsertElementGenericTable(v5, &Buffer, 0x38u, NewElement);
    newString = 0LL;
    v9 = inserted;
    if ( !NewElement[0] || !inserted )
      Microsoft::WRL2::FailFast::Unexpected(0LL);
    ParameterEntry::~ParameterEntry((ParameterEntry *)&Buffer);
  }
  v12 = NewElement[0] == 0;
  *a4 = v9;
  *a5 = !v12;
}
