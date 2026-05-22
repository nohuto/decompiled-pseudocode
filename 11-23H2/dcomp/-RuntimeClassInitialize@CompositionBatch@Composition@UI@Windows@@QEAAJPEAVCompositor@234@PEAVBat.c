/*
 * XREFs of ?RuntimeClassInitialize@CompositionBatch@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVBatchController@234@_N@Z @ 0x180002EF4
 * Callers:
 *     ??$MakeAndInitialize2@VCompositionCommitBatch@Composition@UI@Windows@@V1234@AEAPEAVCompositor@234@PEAVBatchController@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionCommitBatch@Composition@UI@Windows@@AEAPEAVCompositor@456@$$QEAPEAVBatchController@456@@Z @ 0x180002DCC (--$MakeAndInitialize2@VCompositionCommitBatch@Composition@UI@Windows@@V1234@AEAPEAVCompositor@23.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z @ 0x180055F60 (-RuntimeClassInitialize@CompositionObject@Composition@UI@Windows@@QEAAJPEAVCompositor@234@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionBatch::RuntimeClassInitialize(
        Windows::UI::Composition::CompositionBatch *this,
        struct Windows::UI::Composition::Compositor *a2,
        struct Windows::UI::Composition::BatchController *a3,
        char a4)
{
  DWORD CurrentThreadId; // eax
  int v7; // eax
  unsigned int v8; // ebx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 22) = a3;
  *((_BYTE *)this + 130) = a4;
  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = CurrentThreadId;
  *((_BYTE *)this + 129) = 0;
  v7 = Windows::UI::Composition::CompositionObject::RuntimeClassInitialize(this, a2);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3E,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionbatch.cpp",
    (const char *)(unsigned int)v7,
    v10);
  return v8;
}
