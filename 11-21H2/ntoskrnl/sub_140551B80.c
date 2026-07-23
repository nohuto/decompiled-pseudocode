/*
 * XREFs of sub_140551B80 @ 0x140551B80
 * Callers:
 *     <none>
 * Callees:
 *     HeadlessDispatch @ 0x1403C2310 (HeadlessDispatch.c)
 */

__int64 __fastcall sub_140551B80(unsigned int a1)
{
  int v3; // [rsp+48h] [rbp+10h] BYREF
  int v4; // [rsp+4Ch] [rbp+14h]

  v4 = 40;
  dword_140C0CBE0 = 37;
  v3 = 37;
  HeadlessDispatch(9LL, (__int64)&v3, 8LL, 0LL, 0LL);
  return VidSetTextColor(a1);
}
