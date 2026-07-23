/*
 * XREFs of sub_140B1E0A8 @ 0x140B1E0A8
 * Callers:
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B02300 @ 0x140B02300 (sub_140B02300.c)
 * Callees:
 *     strcpy_s @ 0x1403E71A0 (strcpy_s.c)
 *     KeBugCheck @ 0x14041F3B0 (KeBugCheck.c)
 *     sub_14054F1B8 @ 0x14054F1B8 (sub_14054F1B8.c)
 *     ObInsertObject @ 0x14066BA50 (ObInsertObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 *     sub_140B1E364 @ 0x140B1E364 (sub_140B1E364.c)
 *     sub_140B1E3C4 @ 0x140B1E3C4 (sub_140B1E3C4.c)
 *     sub_140B1E41C @ 0x140B1E41C (sub_140B1E41C.c)
 *     sub_140B1E47C @ 0x140B1E47C (sub_140B1E47C.c)
 *     sub_140B1E4DC @ 0x140B1E4DC (sub_140B1E4DC.c)
 *     sub_140B1E534 @ 0x140B1E534 (sub_140B1E534.c)
 *     sub_140B1E58C @ 0x140B1E58C (sub_140B1E58C.c)
 */

bool sub_140B1E0A8()
{
  bool result; // al
  NTSTATUS v1; // eax
  HANDLE v2; // [rsp+60h] [rbp+8h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  if ( ObInsertObject(qword_140D06C40, 0LL, 0x1F0003u, 0, 0LL, &qword_140D07208) < 0 )
    KeBugCheck(0x60u);
  result = 0;
  if ( (unsigned __int8)sub_140B1E58C() )
  {
    if ( (int)sub_140B1E364() >= 0
      && (int)sub_140B1E3C4() >= 0
      && (int)sub_140B1E47C() >= 0
      && (int)sub_140B1E41C() >= 0
      && (int)sub_140B1E4DC() >= 0
      && (int)sub_140B1E534() >= 0 )
    {
      if ( !byte_140D06888 )
        return 1;
      v2 = 0LL;
      if ( (int)sub_140831810(
                  PsInitialSystemProcess,
                  0LL,
                  0LL,
                  *((_BYTE *)PsInitialSystemProcess + 2170),
                  0LL,
                  0,
                  0,
                  0LL,
                  0LL,
                  &v2) >= 0 )
      {
        Object = 0LL;
        v1 = ObReferenceObjectByHandle(v2, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
        qword_140D06A30 = (ULONG_PTR)Object;
        if ( v1 >= 0 )
        {
          strcpy_s((char *)Object + 1448, 0xFuLL, "Secure System");
          if ( (int)sub_14054F1B8() >= 0 )
            return 1;
        }
      }
    }
  }
  return result;
}
