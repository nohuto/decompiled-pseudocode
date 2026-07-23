/*
 * XREFs of KeCopyXfdMaskToTeb @ 0x1405729E0
 * Callers:
 *     KxEnableOptionalXStateFeatures @ 0x140573394 (KxEnableOptionalXStateFeatures.c)
 *     KeInitThread @ 0x140A875D0 (KeInitThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void __fastcall KeCopyXfdMaskToTeb(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  char v4; // dl
  char v5; // al
  __int64 v6; // rcx
  __int16 v7; // r8
  $115DCDF994C6370D29323EAB0E0C9502 v8; // [rsp+28h] [rbp-40h] BYREF

  memset(&v8, 0, sizeof(v8));
  if ( _bittest64(&KeFeatureBits, 0x37u) )
  {
    v2 = a1[30];
    if ( v2 )
    {
      v3 = a1[68];
      v4 = 0;
      if ( (_KPROCESS *)v3 == KeGetCurrentThread()->ApcState.Process )
      {
        v5 = 1;
      }
      else
      {
        KiStackAttachProcess((_KPROCESS *)v3, 0, (__int64)&v8);
        v5 = 1;
        v4 = 1;
      }
      v6 = 0LL;
      if ( *(_QWORD *)(v3 + 1408) )
      {
        v7 = *(_WORD *)(v3 + 2412);
        if ( v7 != 332 && v7 != 452 )
          v5 = 0;
        if ( v5 )
          v6 = v2 + 0x2000;
      }
      *(_QWORD *)(v2 + 6216) = a1[133];
      if ( v6 )
        *(_QWORD *)(v6 + 4112) = a1[133];
      if ( v4 )
        KiUnstackDetachProcess(&v8);
    }
  }
}
