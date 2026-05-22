/*
 * XREFs of ?GetProperties@CompositionObject@Composition@UI@Windows@@UEAAPEAVCompositionPropertySet@234@_N@Z @ 0x180055540
 * Callers:
 *     ?InitializePropertySet@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ @ 0x18002E2FC (-InitializePropertySet@CompositionEffectBrush@Composition@UI@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??$MakeAndInitialize2@VCompositionPropertySet@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPropertySet@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x1800550C0 (--$MakeAndInitialize2@VCompositionPropertySet@Composition@UI@Windows@@V1234@PEAVCompositor@234@@.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180078A40 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

struct Windows::UI::Composition::CompositionPropertySet *__fastcall Windows::UI::Composition::CompositionObject::GetProperties(
        Windows::UI::Composition::CompositionObject *this,
        char a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  int v5; // ecx
  int *v6; // rdi
  int v8; // eax
  unsigned int v9; // esi
  Microsoft::WRL2::NestableRuntimeClass *v10; // rbp
  unsigned int *v11; // r14
  bool v12; // r15
  HANDLE ProcessHeap; // rax
  __int64 v14; // r12
  unsigned int *v15; // rsi
  unsigned __int64 v16; // r8
  unsigned int v17; // edx
  int v18; // ecx
  signed __int64 v19; // rsi
  signed __int64 v20; // r15
  void *v21; // rax
  int v22; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v24; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int32 *v25; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)this + 14) + 4LL) & 0x10000000) == 0 && a2 )
  {
    v25 = (volatile signed __int32 *)*((_QWORD *)this + 3);
    v24 = 0LL;
    v8 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionPropertySet,Windows::UI::Composition::CompositionPropertySet,Windows::UI::Composition::Compositor *>(
           (volatile signed __int32 **)&v24,
           &v25);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8AF,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v24);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x121,
        (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionobject.cpp",
        (const char *)v9,
        v22);
    }
    v10 = v24;
    v11 = (unsigned int *)*((_QWORD *)this + 14);
    if ( v24 == (Microsoft::WRL2::NestableRuntimeClass *)`Windows::UI::Composition::CompositionObject::SetSparse_CompositionPropertySet'::`2'::sc_defaultValue )
    {
      v11[1] &= ~0x10000000u;
    }
    else
    {
      v12 = (v11[1] & 0x10000000) != 0;
      if ( v11 == (unsigned int *)&CSparseStorage::s_defaultEmptyAllocatedStorage )
      {
        ProcessHeap = GetProcessHeap();
        v11 = (unsigned int *)HeapAlloc(ProcessHeap, 8u, 0x30uLL);
        if ( !v11 )
          RaiseFailFastException(0LL, 0LL, 0);
        *v11 = 48;
        *((_QWORD *)this + 14) = v11;
      }
      v14 = *v11;
      v15 = v11 + 3;
      v16 = (unsigned __int64)v11 + v14;
      if ( v11 + 4 > (unsigned int *)((char *)v11 + v14) )
      {
LABEL_24:
        v19 = (char *)v15 - (char *)v11;
        v20 = v19 + 36;
        v21 = DefaultHeap::Realloc(v11, v19 + 36);
        *((_QWORD *)this + 14) = v21;
        if ( !v21 )
          RaiseFailFastException(0LL, 0LL, 0);
        memset_0((void *)(v14 + *((_QWORD *)this + 14)), 0, v20 - v14);
        **((_DWORD **)this + 14) = v20;
        v15 = (unsigned int *)(*((_QWORD *)this + 14) + v19);
        *v15 &= 0xFF000008;
        *v15 |= 8u;
      }
      else
      {
        while ( 1 )
        {
          v17 = *v15;
          v18 = HIBYTE(*v15) & 0x7F;
          if ( v18 == 4 )
            break;
          if ( !v18 )
          {
            if ( (unsigned __int64)(v15 + 3) > v16 )
              goto LABEL_24;
            *v15 = v17 & 0xFF000000 | 8;
            break;
          }
          if ( !v12 && (v17 & 0xFFFFFF) == 8 && (__ROR4__(1, v18) & v11[1]) == 0 )
            break;
          v15 = (unsigned int *)((char *)v15 + (v17 & 0xFFFFFF) + 4);
          if ( (unsigned __int64)(v15 + 1) > v16 )
            goto LABEL_24;
        }
      }
      *(_QWORD *)(v15 + 1) = v10;
      *v15 &= 0x84FFFFFF;
      *v15 |= 0x4000000u;
      *(_DWORD *)(*((_QWORD *)this + 14) + 4LL) |= 0x10000000u;
    }
  }
  v4 = *((_QWORD *)this + 14);
  if ( (*(_DWORD *)(v4 + 4) & 0x10000000) != 0 )
  {
    v5 = *(_DWORD *)(v4 + 12);
    v6 = (int *)(v4 + 12);
    if ( (v5 & 0x7F000000) != 0x4000000 )
    {
      do
      {
        v6 = (int *)((char *)v6 + (v5 & 0xFFFFFF) + 4);
        v5 = *v6;
      }
      while ( (*v6 & 0x7F000000) != 0x4000000 );
    }
    return *(struct Windows::UI::Composition::CompositionPropertySet **)(v6 + 1);
  }
  return (struct Windows::UI::Composition::CompositionPropertySet *)v2;
}
