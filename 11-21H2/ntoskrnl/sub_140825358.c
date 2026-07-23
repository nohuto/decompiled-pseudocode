/*
 * XREFs of sub_140825358 @ 0x140825358
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140AFC9DC @ 0x140AFC9DC (sub_140AFC9DC.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x14020C520 (MmIsThisAnNtAsSystem.c)
 *     sub_140A57C10 @ 0x140A57C10 (sub_140A57C10.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140825358(__int64 a1)
{
  BOOLEAN IsThisAnNtAsSystem; // al
  BOOLEAN v3; // si
  PVOID PoolWithTag; // rbx
  __int64 result; // rax

  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  *(_QWORD *)(a1 + 2152) = &unk_140CF8840;
  v3 = IsThisAnNtAsSystem;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x4B576343u);
  if ( PoolWithTag )
    sub_140A57C10((_DWORD)PoolWithTag, 512, 160, 1264018243, v3 != 0 ? 256 : 128, (__int64)&qword_140C11710);
  else
    PoolWithTag = &unk_140CF8840;
  result = 0LL;
  *(_QWORD *)(a1 + 2144) = PoolWithTag;
  return result;
}
