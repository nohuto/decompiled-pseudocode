/*
 * XREFs of sub_140B18840 @ 0x140B18840
 * Callers:
 *     sub_140B183B4 @ 0x140B183B4 (sub_140B183B4.c)
 *     sub_140B4DA1C @ 0x140B4DA1C (sub_140B4DA1C.c)
 * Callees:
 *     sub_14071FAA0 @ 0x14071FAA0 (sub_14071FAA0.c)
 */

__int64 __fastcall sub_140B18840(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  size_t Size; // [rsp+28h] [rbp-10h]
  size_t Sizea; // [rsp+28h] [rbp-10h]
  size_t Sizeb; // [rsp+28h] [rbp-10h]
  size_t Sizec; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v9) = *(unsigned __int16 *)(a2 + 4);
  LODWORD(Size) = 4;
  result = sub_14071FAA0(a1, (unsigned __int64)&qword_140B57D30, 0, 4u, &v9, Size);
  if ( (int)result >= 0 )
  {
    LODWORD(v9) = *(unsigned __int16 *)(a2 + 6);
    LODWORD(Sizea) = 4;
    result = sub_14071FAA0(a1, (unsigned __int64)&qword_140B57CE0, 0, 4u, &v9, Sizea);
    if ( (int)result >= 0 )
    {
      LODWORD(v9) = *(_DWORD *)(a2 + 8);
      LODWORD(Sizeb) = 4;
      result = sub_14071FAA0(a1, (unsigned __int64)&qword_140B57D00, 0, 4u, &v9, Sizeb);
      if ( (int)result >= 0 )
      {
        LODWORD(v9) = *(_DWORD *)(a2 + 12);
        LODWORD(Sizec) = 4;
        return sub_14071FAA0(a1, (unsigned __int64)&qword_140B57D50, 0, 4u, &v9, Sizec);
      }
    }
  }
  return result;
}
