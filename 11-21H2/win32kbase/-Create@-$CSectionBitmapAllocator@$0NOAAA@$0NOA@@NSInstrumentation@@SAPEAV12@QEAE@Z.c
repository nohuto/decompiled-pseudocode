/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C00D9C7C
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00DA0A4 (-Initialize@-$CSectionEntry@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D9D60 (-Destroy@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C00D9FD8 (-Initialize@-$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

void *__fastcall NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Create(__int64 a1)
{
  __int64 Pool2; // rax
  void *v3; // rbx

  Pool2 = ExAllocatePool2(262LL, 40LL);
  v3 = (void *)Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_DWORD *)(Pool2 + 32) = 0;
  *(_DWORD *)(Pool2 + 36) = 0;
  if ( !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Initialize(Pool2, a1) )
  {
    NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Destroy(v3);
    return 0LL;
  }
  return v3;
}
