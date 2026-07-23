/*
 * XREFs of sub_140AB6CC0 @ 0x140AB6CC0
 * Callers:
 *     sub_140430F00 @ 0x140430F00 (sub_140430F00.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140AB6CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // [rsp+40h] [rbp+8h]
  unsigned __int64 v11; // [rsp+48h] [rbp+10h]
  char v12; // [rsp+58h] [rbp+20h]

  v5 = v11;
  if ( (v11 & 1) != 0 )
  {
    if ( !_interlockedbittestandreset(MK_FP(__GS__, 40984LL), 0) )
    {
      v9 = __readcr3();
      if ( v9 == v11 )
        goto LABEL_8;
      v5 = v11 | 0x8000000000000000uLL;
    }
  }
  else
  {
    v6 = __readcr3();
    if ( v6 == v11 )
      goto LABEL_8;
  }
  __writecr3(v5);
LABEL_8:
  __writemsr(0xC0000101, v10);
  if ( (v12 & 4) == 0 )
  {
    __writemsr(0x17Au, 0LL);
    JUMPOUT(0x140AB6D3ALL);
  }
  __writeeflags(v11);
  __writemsr(0x17Au, 0LL);
  JUMPOUT(0x140AB6D81LL);
}
