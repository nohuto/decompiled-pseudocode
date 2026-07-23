/*
 * XREFs of sub_140237230 @ 0x140237230
 * Callers:
 *     sub_140236EC0 @ 0x140236EC0 (sub_140236EC0.c)
 *     sub_1406ED528 @ 0x1406ED528 (sub_1406ED528.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_1402375D8 @ 0x1402375D8 (sub_1402375D8.c)
 *     sub_1402376A4 @ 0x1402376A4 (sub_1402376A4.c)
 *     sub_1402376C4 @ 0x1402376C4 (sub_1402376C4.c)
 *     sub_140237A0C @ 0x140237A0C (sub_140237A0C.c)
 *     sub_140238A40 @ 0x140238A40 (sub_140238A40.c)
 *     sub_140262ED4 @ 0x140262ED4 (sub_140262ED4.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 *     sub_1409D57BC @ 0x1409D57BC (sub_1409D57BC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140237230(__int64 a1)
{
  void *v2; // rcx
  char v3; // al
  ULONG_PTR v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbp
  struct _KTHREAD *v7; // rsi
  unsigned int v8; // ecx
  char *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // r8d
  struct _KTHREAD *v13; // rax
  bool v14; // zf
  char v15; // al
  char v16; // cl
  void *v17; // rbx
  void *v18; // rcx
  __int64 result; // rax
  _QWORD *v20; // rbx
  _OWORD v21[3]; // [rsp+30h] [rbp-58h] BYREF

  *(_BYTE *)(a1 + 6021) |= 1u;
  v2 = *(void **)(a1 + 6200);
  memset(v21, 0, sizeof(v21));
  if ( v2 )
  {
    KeSetEvent((PRKEVENT)(a1 + 6152), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 6200), Executive, 0, 0, 0LL);
    v2 = *(void **)(a1 + 6200);
  }
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  sub_1402376A4(a1 + 6232, 1LL);
  v3 = *(_BYTE *)(a1 + 6021);
  if ( (v3 & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 6488) )
    {
      KeSetEvent((PRKEVENT)(a1 + 6496), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 6488), Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 6488), 0x746C6644u);
      v3 = *(_BYTE *)(a1 + 6021);
    }
    if ( (v3 & 4) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 6584);
      if ( v4 )
      {
        sub_14030D5C0(v4);
        v3 = *(_BYTE *)(a1 + 6021);
      }
      if ( (v3 & 4) != 0 && *(_QWORD *)(a1 + 6568) )
      {
        v20 = *(_QWORD **)(a1 + 6568);
        if ( *v20 )
          sub_1406D9550();
        ExFreePoolWithTag(v20, 0);
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  sub_140238A40(a1);
  sub_140237A0C(a1);
  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    v6 = a1 + 6024;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 6024);
    v7 = KeGetCurrentThread();
    if ( (unsigned __int64)(v6 - qword_140C50630) < 0x8000000000LL )
      v8 = sub_140287F30(*((_QWORD *)v7 + 23));
    else
      v8 = -1;
    _disable();
    v9 = (char *)v7 + 1696;
    v10 = v6 & 0x7FFFFFFFFFFFFFFCLL;
    v11 = 0LL;
    while ( (*(_QWORD *)v9 & 0x7FFFFFFFFFFFFFFCLL) != v10
         || !v9[18]
         || (*(_DWORD *)v9 & 1) != 0
         || *((_DWORD *)v9 + 2) != v8 )
    {
      v11 = (unsigned int)(v11 + 1);
      v9 += 96;
      if ( (unsigned int)v11 >= 6 )
        goto LABEL_45;
    }
    v9[18] = 0;
    if ( v9 )
    {
      if ( *(__int64 *)v9 < 0 )
      {
        *v9 |= 2u;
        _enable();
        sub_14034EE30(v9, v11, v10);
        _disable();
      }
      v12 = *((_DWORD *)v9 + 22);
      *((_DWORD *)v9 + 22) = 0;
      v9[17] = 0;
      *(_QWORD *)v9 = 0LL;
      *((_BYTE *)v7 + 792) |= 1 << v9[16];
      _enable();
      if ( v12 )
        sub_14022B568((ULONG_PTR)v7, a1 + 6024, v12);
      goto LABEL_28;
    }
LABEL_45:
    if ( (*((_DWORD *)v7 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, a1 + 6024, v8, 0LL);
    _enable();
LABEL_28:
    v13 = KeGetCurrentThread();
    v14 = (*((_WORD *)v13 + 243))++ == 0xFFFF;
    if ( v14 && *((struct _KTHREAD **)v13 + 19) != (struct _KTHREAD *)((char *)v13 + 152) )
      KiCheckForKernelApcDelivery();
  }
  sub_1402F9540(KeGetCurrentThread());
  v15 = *(_BYTE *)(a1 + 6021);
  if ( (v15 & 4) != 0 && *(_QWORD *)(a1 + 6584) )
  {
    sub_1402D0930(v21, 0LL);
    v15 = *(_BYTE *)(a1 + 6021);
  }
  v16 = *(_BYTE *)(a1 + 6020);
  if ( v16 )
  {
    if ( v16 == 1 )
      sub_1409D57BC(a1 + 6216);
  }
  else
  {
    v17 = *(void **)(a1 + 6216);
    if ( (v15 & 4) != 0 )
    {
      v18 = *(void **)(a1 + 6224);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      sub_1402375D8(a1 + 6232);
      sub_1402375D8(a1 + 6360);
    }
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
  }
  result = sub_1402376C4(a1 + 6608);
  if ( (*(_BYTE *)(a1 + 6021) & 0x10) != 0 )
    return sub_140262ED4(*(unsigned int *)(a1 + 6208), 1LL, 1LL);
  return result;
}
