/*
 * XREFs of sub_1402A4298 @ 0x1402A4298
 * Callers:
 *     sub_1407C2680 @ 0x1407C2680 (sub_1407C2680.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140369460 (ExBlockOnAddressPushLock.c)
 *     sub_14071F27C @ 0x14071F27C (sub_14071F27C.c)
 *     sub_14071F2B8 @ 0x14071F2B8 (sub_14071F2B8.c)
 */

__int64 __fastcall sub_1402A4298(__int64 a1)
{
  int v2; // ebx
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  ((void (*)(void))sub_14071F2B8)();
  while ( 1 )
  {
    v4 = *(_DWORD *)(a1 + 4800);
    v2 = v4;
    result = sub_14071F27C(a1);
    if ( !v2 )
      break;
    ExBlockOnAddressPushLock(a1 + 4808, a1 + 4800, (unsigned int)&v4, 4, 0LL);
    sub_14071F2B8(a1);
  }
  return result;
}
