/*
 * XREFs of ?HintSize@CDevice@DirectComposition@@UEAAJII@Z @ 0x18007CEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?Leave@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x1800327E0 (-Leave@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?GetNext@?$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAPEAVCSurfaceFactory@DirectComposition@@PEAV23@@Z @ 0x18009B538 (-GetNext@-$CLinkTargetedDoubleLinkedList@VCSurfaceFactory@DirectComposition@@$0BCA@$0BCA@@@QEBAP.c)
 */

__int64 __fastcall DirectComposition::CDevice::HintSize(
        DirectComposition::CDevice *this,
        unsigned int a2,
        unsigned int a3)
{
  DirectComposition::CDeviceLock *v3; // rdi
  DirectComposition::CDevice *v4; // rbx
  char *v7; // r15
  __int64 Next; // rsi
  __int64 v9; // r11
  unsigned int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int v13; // r10d
  __int64 v14; // r8
  unsigned int v15; // edx

  v3 = (DirectComposition::CDevice *)((char *)this + 56);
  v4 = this;
  DirectComposition::CDeviceLock::Enter((DirectComposition::CDevice *)((char *)this + 56));
  v7 = (char *)v4 + 568;
  v4 = (DirectComposition::CDevice *)((char *)v4 + 576);
  Next = *(_QWORD *)v4 - 288LL;
  if ( *(DirectComposition::CDevice **)v4 == v4 )
    Next = 0LL;
  for ( ;
        Next;
        Next = CLinkTargetedDoubleLinkedList<DirectComposition::CSurfaceFactory,288,288>::GetNext(v7, Next, v14, v11) )
  {
    v9 = *(_QWORD *)(Next + 312);
    v10 = a3;
    v11 = a2;
    v12 = *(_QWORD *)(v9 + 128);
    v13 = *(_DWORD *)(v12 + 132);
    if ( *(_BYTE *)(v12 + 249) )
      v13 = 0x800000;
    if ( a2 >= v13 )
      v11 = v13;
    *(_DWORD *)(v9 + 96) = v11;
    if ( a3 >= v13 )
      v10 = v13;
    *(_DWORD *)(v9 + 100) = v10;
    *(_DWORD *)(v9 + 112) = (2 * (int)v11 / 3u + 31) & 0xFFFFFFE0;
    *(_DWORD *)(v9 + 116) = (2 * v10 / 3 + 31) & 0xFFFFFFE0;
    v14 = (4 * v10 / 3 + 31) & 0xFFFFFFE0;
    v15 = (4 * (int)v11 / 3u + 31) & 0xFFFFFFE0;
    if ( v15 >= v13 )
      v15 = v13;
    *(_DWORD *)(v9 + 104) = v15;
    if ( (unsigned int)v14 >= v13 )
      v14 = v13;
    *(_DWORD *)(v9 + 108) = v14;
  }
  if ( v3 )
    DirectComposition::CDeviceLock::Leave(v3);
  return 0LL;
}
