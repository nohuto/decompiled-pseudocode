/*
 * XREFs of ??_GExpressionAnimator@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18007BEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180002BFC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ?Do@FailFast@WRL2@Microsoft@@SAXXZ @ 0x180108A5C (-Do@FailFast@WRL2@Microsoft@@SAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180122498 (--$_Destroy_range@V-$allocator@V-$RefPtr@VCompositionPropertyAnimator@Composition@UI@Windows@@@W.c)
 */

Windows::UI::Composition::ExpressionAnimator *__fastcall Windows::UI::Composition::ExpressionAnimator::`scalar deleting destructor'(
        Windows::UI::Composition::ExpressionAnimator *this,
        __int64 a2)
{
  __int64 v3; // rcx
  char v4; // bp
  __int64 v5; // rdi
  __int64 v6; // rsi
  void *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  HANDLE ProcessHeap; // rax
  void *v13; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp+18h] BYREF

  v3 = *((_QWORD *)this + 32);
  v4 = a2;
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertyAnimator>>>(
      v3,
      *((_QWORD *)this + 33));
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 32),
      (*((_QWORD *)this + 34) - *((_QWORD *)this + 32)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
  }
  if ( *((_QWORD *)this + 30) || *((_QWORD *)this + 31) || *((_QWORD *)this + 28) || *((_QWORD *)this + 29) )
    Microsoft::WRL2::FailFast::Do();
  v5 = *((_QWORD *)this + 25);
  if ( v5 )
  {
    v6 = *((_QWORD *)this + 26);
    while ( v5 != v6 )
    {
      WindowsDeleteString(*(HSTRING *)(v5 + 16));
      *(_QWORD *)(v5 + 16) = 0LL;
      WindowsDeleteString(*(HSTRING *)(v5 + 8));
      *(_QWORD *)(v5 + 8) = 0LL;
      v5 += 24LL;
    }
    v7 = (void *)*((_QWORD *)this + 25);
    v8 = *((_QWORD *)this + 27) - (_QWORD)v7;
    v13 = v7;
    v9 = 8 * (v8 >> 3);
    v14 = v9;
    if ( v9 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v13, &v14);
      v7 = v13;
      v9 = v14;
    }
    operator delete(v7, v9);
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  *(_QWORD *)this = &Windows::UI::Composition::ProxyObject::`vftable';
  v10 = *((_QWORD *)this + 14);
  if ( (_UNKNOWN *)v10 != &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    if ( *(_DWORD *)(v10 + 4) && *(_BYTE *)(v10 + 8) )
      RaiseFailFastException(0LL, 0LL, 0);
    operator delete(*((void **)this + 14));
  }
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, a2);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 4) != 0 )
    {
      __global_delete(this, 0x130uLL);
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
