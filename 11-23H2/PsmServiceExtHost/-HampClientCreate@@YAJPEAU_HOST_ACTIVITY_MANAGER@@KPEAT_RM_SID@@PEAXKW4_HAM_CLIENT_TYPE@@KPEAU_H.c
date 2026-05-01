/*
 * XREFs of ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DCE8
 * Callers:
 *     ?HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x180044B34 (-HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004C4B8 (-HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180010F30 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DAE8 (-HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientFindOrInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAPEAU1@@Z @ 0x18004E000 (-HampClientFindOrInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAPEAU1@@Z.c)
 *     ?HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@PEAXPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@KKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E134 (-HampClientInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLB.c)
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18004E6A0 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x18004EAAC (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall HampClientCreate(
        __int64 a1,
        unsigned __int64 a2,
        void *a3,
        void *a4,
        unsigned int a5,
        char a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        const unsigned __int16 **a10,
        struct _HAM_CLIENT_CONTEXT **a11)
{
  struct _HAM_CLIENT_CONTEXT *v11; // rdi
  int State; // ebx
  int v15; // eax
  int v16; // ebx
  unsigned int v17; // ebp
  struct _HAM_CLIENT_CONTEXT *Heap; // rax
  __int64 v19; // r8
  struct _HAM_CLIENT_CONTEXT *v20; // rsi
  struct _HAM_CLIENT_CONTEXT *v22; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-30h] BYREF
  unsigned int v25; // [rsp+98h] [rbp+10h]

  v25 = a2;
  v11 = 0LL;
  v22 = 0LL;
  if ( !a6 && a10 && *a10 )
  {
    State = RtlStringCchLengthW(*a10, a2, &v23);
    if ( State < 0 )
      return (unsigned int)State;
    v15 = v23;
  }
  else
  {
    v15 = 0;
  }
  v16 = v15 + 1;
  v17 = 2 * (v15 + 1) + 220;
  Heap = (struct _HAM_CLIENT_CONTEXT *)HampAllocateHeap(v17);
  v20 = Heap;
  if ( Heap )
  {
    LOBYTE(v19) = a6;
    HampClientInitialize(a1, a5, v19, a7, a8, a9, a10, v17, v16, Heap);
    State = HampClientAllocateState(v20);
    if ( State >= 0 )
    {
      HampClientFindOrInsert(v20, &v22);
      v11 = v22;
      State = HampClientStart(v22, a3, a4, v25, a7, (struct _HAM_CLIENT_CONNECTION_PARAMETERS *)a10);
      if ( State >= 0 )
      {
        State = 0;
        *a11 = v11;
      }
    }
    CemRcObjectDereference(v20);
    if ( v11 )
      CemRcObjectDereference(v11);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)State;
}
