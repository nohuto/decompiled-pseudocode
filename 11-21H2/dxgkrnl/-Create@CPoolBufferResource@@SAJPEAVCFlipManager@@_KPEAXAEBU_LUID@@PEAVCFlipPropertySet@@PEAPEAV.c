/*
 * XREFs of ?Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x1C007F044
 * Callers:
 *     ?AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C007C510 (-AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C007BF68 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ??0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z @ 0x1C007ED28 (--0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z @ 0x1C007EE44 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0HDGCEDEG@@@SAPEAX_K@Z.c)
 *     DxgkGetSharedAllocationObjectType @ 0x1C0161E10 (DxgkGetSharedAllocationObjectType.c)
 */

__int64 __fastcall CPoolBufferResource::Create(
        struct CFlipManager *a1,
        __int64 a2,
        void *a3,
        const struct _LUID *a4,
        struct CFlipPropertySet *a5,
        struct CPoolBufferResourceState **a6)
{
  CFlipResource *v7; // rdi
  PVOID v8; // r14
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  NTSTATUS v13; // eax
  PVOID v14; // rsi
  NTSTATUS v15; // ebx
  NTSTATUS v16; // eax
  __int64 v17; // r9
  CFlipResource *Pool2; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  char v24; // cl
  void *EventHandle; // [rsp+30h] [rbp-50h] BYREF
  PVOID Object; // [rsp+38h] [rbp-48h] BYREF
  PVOID v28; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF

  v7 = 0LL;
  EventHandle = 0LL;
  v8 = 0LL;
  SharedAllocationObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
  Object = 0LL;
  v13 = ObReferenceObjectByHandle(a3, 0xF0000u, SharedAllocationObjectType, 1, &Object, 0LL);
  v14 = Object;
  v15 = v13;
  if ( v13 >= 0 )
  {
    memset(&ObjectAttributes.Length + 1, 0, 20);
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v15 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 1u);
    if ( v15 >= 0 )
    {
      v28 = 0LL;
      v16 = ObReferenceObjectByHandle(EventHandle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &v28, 0LL);
      v8 = v28;
      v15 = v16;
      if ( v16 >= 0 )
      {
        Pool2 = (CFlipResource *)ExAllocatePool2(257LL, 88LL, 1919042374LL, v17);
        v7 = Pool2;
        if ( Pool2 )
        {
          CFlipResource::CFlipResource(Pool2, a2, a5);
          v19 = (__int64)*a4;
          *((_DWORD *)v7 + 20) = 0;
          *((_QWORD *)v7 + 9) = v19;
          *(_QWORD *)v7 = &CPoolBufferResource::`vftable';
          *((_QWORD *)v7 + 6) = a1;
          *((_QWORD *)v7 + 7) = v14;
          *((_QWORD *)v7 + 8) = v8;
          v23 = DXGQUOTAALLOCATOR<256,1935819590>::operator new((__int64)&CPoolBufferResource::`vftable', v20, v21, v22);
          if ( v23 )
          {
            v24 = *(_BYTE *)(v23 + 32);
            *(_QWORD *)v23 = &CFlipResourceState::`vftable';
            *(_QWORD *)(v23 + 24) = v7;
            *(_BYTE *)(v23 + 32) = v24 & 0xF0 | 1;
            *(_QWORD *)(v23 + 16) = v23 + 8;
            *(_QWORD *)(v23 + 8) = v23 + 8;
            ++*(_DWORD *)(*(_QWORD *)(v23 + 24) + 24LL);
            *(_QWORD *)v23 = &CPoolBufferResourceState::`vftable';
            *a6 = (struct CPoolBufferResourceState *)v23;
          }
          else
          {
            v15 = -1073741801;
          }
          goto LABEL_14;
        }
        v15 = -1073741801;
        v7 = 0LL;
      }
    }
  }
  if ( v14 )
    ObfDereferenceObject(v14);
  if ( v8 )
    ObfDereferenceObject(v8);
LABEL_14:
  if ( EventHandle )
    ObCloseHandle(EventHandle, 0);
  if ( v7 )
    CFlipResource::Release(v7);
  return (unsigned int)v15;
}
