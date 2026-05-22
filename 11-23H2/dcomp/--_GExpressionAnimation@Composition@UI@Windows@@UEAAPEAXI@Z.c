/*
 * XREFs of ??_GExpressionAnimation@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x18005F3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180002BFC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAXPEAVParameterEntry@@@Z @ 0x18003FD0C (-RemoveElement@-$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAXPEAVParameterEntry@@@Z.c)
 *     ??1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ @ 0x180052E40 (--1ContextRuntimeClass@WRL2@Microsoft@@MEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ @ 0x18005FE80 (-Reset@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJXZ.c)
 *     ??$_Destroy_range@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU1234@AEAV?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@0@@Z @ 0x180068CA4 (--$_Destroy_range@V-$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@YAXPEAUA.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x18008E864 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

Windows::UI::Composition::ExpressionAnimation *__fastcall Windows::UI::Composition::ExpressionAnimation::`scalar deleting destructor'(
        Windows::UI::Composition::ExpressionAnimation *this,
        char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  HSTRING *v7; // rsi
  HSTRING *v8; // r14
  PVOID v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  HSTRING *v12; // rsi
  HSTRING *v13; // r14
  PVOID v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  Windows::UI::Composition::AnimationObjectInfo *v17; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v18; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v19; // rcx
  ParameterEntry *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  HANDLE ProcessHeap; // rax
  PVOID RestartKey; // [rsp+50h] [rbp+30h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp+40h] BYREF

  *((_QWORD *)this + 125) = 0LL;
  *((_DWORD *)this + 252) = 0;
  v4 = (void *)*((_QWORD *)this + 127);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 127) = 0LL;
  }
  Windows::UI::Composition::ExpressionAnimationBuilder::Reset((Windows::UI::Composition::ExpressionAnimation *)((char *)this + 360));
  v5 = (void *)*((_QWORD *)this + 119);
  if ( v5 != *((void **)this + 120) )
  {
    operator delete(v5);
    *((_QWORD *)this + 119) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 73);
  if ( v6 != *((void **)this + 74) )
  {
    operator delete(v6);
    *((_QWORD *)this + 73) = 0LL;
  }
  v7 = (HSTRING *)*((_QWORD *)this + 70);
  if ( v7 )
  {
    v8 = (HSTRING *)*((_QWORD *)this + 71);
    while ( v7 != v8 )
    {
      WindowsDeleteString(*v7);
      *v7++ = 0LL;
    }
    v9 = (PVOID)*((_QWORD *)this + 70);
    v10 = *((_QWORD *)this + 72) - (_QWORD)v9;
    RestartKey = v9;
    v11 = v10 & 0xFFFFFFFFFFFFFFF8uLL;
    v26 = v11;
    if ( v11 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&RestartKey, &v26);
      v9 = RestartKey;
      v11 = v26;
    }
    operator delete(v9, v11);
    *((_QWORD *)this + 70) = 0LL;
    *((_QWORD *)this + 71) = 0LL;
    *((_QWORD *)this + 72) = 0LL;
  }
  v12 = (HSTRING *)*((_QWORD *)this + 67);
  if ( v12 )
  {
    v13 = (HSTRING *)*((_QWORD *)this + 68);
    while ( v12 != v13 )
    {
      WindowsDeleteString(*v12);
      *v12++ = 0LL;
    }
    v14 = (PVOID)*((_QWORD *)this + 67);
    v15 = *((_QWORD *)this + 69) - (_QWORD)v14;
    RestartKey = v14;
    v16 = v15 & 0xFFFFFFFFFFFFFFF8uLL;
    v26 = v16;
    if ( v16 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&RestartKey, &v26);
      v14 = RestartKey;
      v16 = v26;
    }
    operator delete(v14, v16);
    *((_QWORD *)this + 67) = 0LL;
    *((_QWORD *)this + 68) = 0LL;
    *((_QWORD *)this + 69) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 480);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 440);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 376);
  v17 = (Windows::UI::Composition::AnimationObjectInfo *)*((_QWORD *)this + 39);
  if ( v17 )
  {
    std::_Destroy_range<std::allocator<Windows::UI::Composition::AnimationObjectInfo>>(v17);
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 39),
      8 * ((__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 39)) >> 3));
    *((_QWORD *)this + 39) = 0LL;
    *((_QWORD *)this + 40) = 0LL;
    *((_QWORD *)this + 41) = 0LL;
  }
  v18 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 34);
  if ( v18 )
  {
    *((_QWORD *)this + 34) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v18);
  }
  v19 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 33);
  if ( v19 )
  {
    *((_QWORD *)this + 33) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v19);
  }
  while ( 1 )
  {
    RestartKey = 0LL;
    v20 = (ParameterEntry *)RtlEnumerateGenericTableWithoutSplaying(
                              (PRTL_GENERIC_TABLE)((char *)this + 192),
                              &RestartKey);
    if ( !v20 )
      break;
    CGenericTableMap<HSTRING__ *,ParameterEntry>::RemoveElement((PRTL_GENERIC_TABLE)((char *)this + 192), v20);
  }
  v22 = *((_QWORD *)this + 14);
  if ( (_UNKNOWN *)v22 != &CSparseStorage::s_defaultEmptyAllocatedStorage )
  {
    if ( *(_DWORD *)(v22 + 4) && *(_BYTE *)(v22 + 8) )
      RaiseFailFastException(0LL, 0LL, 0);
    operator delete(*((void **)this + 14));
  }
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this, v21);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x400uLL);
    }
    else if ( this )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, this);
    }
  }
  return this;
}
