/*
 * XREFs of DwmAsyncMagnSetWindowFilterList @ 0x1C0272588
 * Callers:
 *     MagpComposeDesktop @ 0x1C0120198 (MagpComposeDesktop.c)
 *     MagSetLensContextInformation @ 0x1C01CA01C (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetWindowFilterList(PVOID Object, __int64 a2, __int64 a3, int *a4)
{
  unsigned int v8; // ebx
  int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // r9
  __int64 v12; // r10
  _QWORD *v13; // r8
  _QWORD v15[34]; // [rsp+20h] [rbp-E0h] BYREF

  v8 = -1073741823;
  if ( Object )
  {
    memset(v15, 0, sizeof(v15));
    v9 = *a4;
    WORD2(v15[0]) = 0x8000;
    HIDWORD(v15[7]) = a4[1];
    LODWORD(v15[0]) = 17826024;
    LODWORD(v15[5]) = 1073741926;
    v15[6] = a2;
    v10 = 25;
    v15[33] = a3;
    LODWORD(v15[7]) = v9;
    if ( (unsigned int)(HIDWORD(v15[7]) + v9) >= 0x19 || (v10 = HIDWORD(v15[7]) + v9) != 0 )
    {
      v11 = *((_QWORD *)a4 + 1) - (_QWORD)&v15[8];
      v12 = v10;
      v13 = &v15[8];
      do
      {
        *v13 = *(_QWORD *)((char *)v13 + v11);
        ++v13;
        --v12;
      }
      while ( v12 );
    }
    EtwUpdateEvent(0LL);
    v8 = LpcRequestPort(Object, v15);
    ObfDereferenceObject(Object);
  }
  return v8;
}
