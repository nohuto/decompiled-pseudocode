/*
 * XREFs of _anonymous_namespace_::CopyPointerInfo @ 0x180077A6C
 * Callers:
 *     ?OnInput@ShellHandwritingProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180077EB0 (-OnInput@ShellHandwritingProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::CopyPointerInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = *(_DWORD *)a1;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a2 + 48) = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a2 + 52) = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a2 + 56) = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a2 + 60) = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 68);
  *(_DWORD *)(a2 + 68) = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a2 + 72) = *(_DWORD *)(a1 + 76);
  *(_QWORD *)(a2 + 80) = *(_QWORD *)(a1 + 80);
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(a1 + 96);
  *(_DWORD *)(a2 + 92) = *(_DWORD *)(a1 + 100);
  *(_DWORD *)(a2 + 96) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a2 + 100) = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a2 + 104) = *(_DWORD *)(a1 + 112);
  result = *(unsigned int *)(a1 + 116);
  *(_DWORD *)(a2 + 108) = result;
  return result;
}
