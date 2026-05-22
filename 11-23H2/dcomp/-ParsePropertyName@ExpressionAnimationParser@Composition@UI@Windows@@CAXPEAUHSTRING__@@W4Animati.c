/*
 * XREFs of ?ParsePropertyName@ExpressionAnimationParser@Composition@UI@Windows@@CAXPEAUHSTRING__@@W4AnimationBindingDirection@234@PEAVCompositionObject@234@PEAUExpressionErrorInfo@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAH@Z @ 0x1801974E8
 * Callers:
 *     ?ParseTargetProperty@ExpressionAnimationParser@Composition@UI@Windows@@SAXPEAUHSTRING__@@PEAVCompositionObject@234@PEAUExpressionErrorInfo@234@PEAVExpressionObjectPropertyInfo@@PEAW4DCOMPOSITION_EXPRESSION_TYPE@@PEAPEAVSubchannelMaskInfo@@PEAPEAU5@@Z @ 0x18019767C (-ParseTargetProperty@ExpressionAnimationParser@Composition@UI@Windows@@SAXPEAUHSTRING__@@PEAVCom.c)
 * Callees:
 *     ?ClearErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@AEAAXXZ @ 0x180061CB4 (-ClearErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?SetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAXPEBG@Z @ 0x180069158 (-SetErrorContext@ExpressionErrorInfo@Composition@UI@Windows@@QEAAXPEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z @ 0x180108EB4 (-OutOfMemory@FailFast@WRL2@Microsoft@@SAX_K@Z.c)
 */

void __fastcall Windows::UI::Composition::ExpressionAnimationParser::ParsePropertyName(
        HSTRING a1,
        int a2,
        __int64 a3,
        Windows::UI::Composition::ExpressionErrorInfo *a4,
        __int64 a5,
        __int64 a6,
        int *a7)
{
  const unsigned __int16 *v8; // rsi
  int v12; // r15d
  __int64 v13; // r13
  char v14; // al
  PCWSTR StringRawBuffer; // rax
  UINT32 v16; // r8d
  __int64 v17; // rcx
  char v18; // al
  int v19; // edi
  bool v20; // zf
  UINT32 v21; // eax
  HSTRING newString; // [rsp+30h] [rbp-10h] BYREF
  int v23; // [rsp+88h] [rbp+48h] BYREF
  UINT32 length; // [rsp+90h] [rbp+50h] BYREF

  newString = 0LL;
  v8 = 0LL;
  length = 0;
  v23 = 0;
  v12 = -1;
  v13 = a6;
  v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, int *, __int64, __int64))(*(_QWORD *)a3 + 200LL))(
          a3,
          a1,
          &v23,
          a5,
          a6);
  if ( (a2 & v23) != 0 && v14 )
    goto LABEL_3;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, &length);
  v8 = StringRawBuffer;
  v16 = length - 1;
  v17 = (int)(length - 1);
  if ( (int)(length - 1) < 0 )
    goto LABEL_13;
  while ( StringRawBuffer[v17] != 46 )
  {
    --v16;
    if ( --v17 < 0 )
      goto LABEL_13;
  }
  v12 = v16;
  if ( v16 == -1 )
    goto LABEL_13;
  if ( WindowsSubstringWithSpecifiedLength(a1, 0, v16, &newString) < 0 )
    Microsoft::WRL2::FailFast::OutOfMemory();
  v18 = (*(__int64 (__fastcall **)(__int64, HSTRING, int *, __int64, __int64))(*(_QWORD *)a3 + 200LL))(
          a3,
          newString,
          &v23,
          a5,
          v13);
  if ( (a2 & v23) != 0 && v18 )
  {
LABEL_3:
    *(_QWORD *)a4 = 0LL;
    *((_DWORD *)a4 + 2) = 0;
    Windows::UI::Composition::ExpressionErrorInfo::ClearErrorContext(a4);
  }
  else
  {
LABEL_13:
    v19 = a2 - 1;
    if ( v19 )
    {
      if ( v19 == 1 )
        *(_DWORD *)a4 = 19;
      else
        *(_DWORD *)a4 = 1;
    }
    else
    {
      *(_DWORD *)a4 = 18;
    }
  }
  if ( newString )
    WindowsDeleteString(newString);
  v20 = *(_DWORD *)a4 == 0;
  *a7 = v12;
  if ( !v20 )
  {
    v21 = length;
    *((_DWORD *)a4 + 1) = 0;
    *((_DWORD *)a4 + 2) = v21;
    Windows::UI::Composition::ExpressionErrorInfo::SetErrorContext(a4, v8);
  }
}
