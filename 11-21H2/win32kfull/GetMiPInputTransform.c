/*
 * XREFs of GetMiPInputTransform @ 0x1C01DCC90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C016C78A (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z.c)
 */

__int64 __fastcall GetMiPInputTransform(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rcx
  InputTransform *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct tagINPUT_TRANSFORM *v9; // [rsp+20h] [rbp-18h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 1312);
  if ( !v4 || (*(_DWORD *)v4 & 1) == 0 || (v5 = (InputTransform *)ValidateHwnd(*(_QWORD *)(v4 + 48))) == 0LL )
  {
LABEL_8:
    v7 = 87LL;
    goto LABEL_9;
  }
  v6 = *(_QWORD *)(a1 + 1312);
  if ( (*(_DWORD *)(v6 + 36) & 0x400000) != 0 )
  {
    v10 = *(_QWORD *)(v6 + 104);
    LOBYTE(v9) = 1;
    if ( (unsigned int)InputTransform::GetTransformList(v5, (struct tagWND *)1, (__int64)&v10, a2, v9) )
      return 1LL;
    goto LABEL_8;
  }
  v7 = 232LL;
LABEL_9:
  UserSetLastError(v7, (__int64)a2);
  return 0LL;
}
