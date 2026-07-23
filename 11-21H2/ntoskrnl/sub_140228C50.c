/*
 * XREFs of sub_140228C50 @ 0x140228C50
 * Callers:
 *     sub_140227020 @ 0x140227020 (sub_140227020.c)
 *     sub_140332110 @ 0x140332110 (sub_140332110.c)
 *     sub_1403731C0 @ 0x1403731C0 (sub_1403731C0.c)
 * Callees:
 *     sub_14020DAE8 @ 0x14020DAE8 (sub_14020DAE8.c)
 *     sub_14022948C @ 0x14022948C (sub_14022948C.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

unsigned __int64 __fastcall sub_140228C50(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8
  char v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v8; // rax
  bool v9; // zf
  __int64 v10; // rcx
  char *v11; // rax
  int v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a1 + 184);
  v12 = 0;
  v4 = v2 & 7;
  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    if ( v4 )
    {
      if ( v4 == 7 )
      {
        v8 = &unk_140C51D80;
      }
      else
      {
        v8 = &unk_140C51D78;
        if ( v4 != 5 )
          v8 = &unk_140C51D90;
      }
    }
    else
    {
      v8 = (_QWORD *)(a1 + 176);
    }
    v9 = *v8 == 0LL;
  }
  else
  {
    if ( v4
      || a2 < 0xFFFFF6FB7DBED000uLL
      || a2 > 0xFFFFF6FB7DBEDFFFuLL
      || (v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL) + 592LL)) == 0 )
    {
      if ( (unsigned int)sub_14022948C(a1) )
        return ((unsigned __int64)sub_140317A10(v5) >> 60) & 1;
      v11 = sub_14020DAE8(v6, v5, &v12);
      return ((*(_DWORD *)v11 >> v12) & 1) != 0;
    }
    v9 = *(_DWORD *)(v10 + 4 * ((a2 >> 3) & 0x1FF)) == 0;
  }
  return !v9;
}
