/*
 * XREFs of sub_14083F84C @ 0x14083F84C
 * Callers:
 *     sub_14083F570 @ 0x14083F570 (sub_14083F570.c)
 * Callees:
 *     EtwRegister @ 0x1406D2350 (EtwRegister.c)
 *     sub_140816288 @ 0x140816288 (sub_140816288.c)
 */

__int64 sub_14083F84C()
{
  int v0; // ecx
  ULONGLONG RegHandle; // [rsp+40h] [rbp+8h] BYREF

  RegHandle = 0LL;
  v0 = sub_140816288(
         _InterlockedExchange(&dword_140C18E94, dword_140C18E94),
         (__int64)&stru_140012698,
         0,
         0x200000000LL,
         0,
         1);
  if ( v0 >= 0 )
  {
    v0 = sub_140816288(
           _InterlockedExchange(&dword_140C18E98, dword_140C18E98),
           (__int64)&stru_140012698,
           0,
           0x100000000LL,
           0,
           1);
    if ( v0 >= 0 && !qword_140C16E68 )
    {
      v0 = EtwRegister(&stru_140012698, 0LL, 0LL, &RegHandle);
      if ( v0 >= 0 )
        qword_140C16E68 = RegHandle;
    }
  }
  return (unsigned int)v0;
}
