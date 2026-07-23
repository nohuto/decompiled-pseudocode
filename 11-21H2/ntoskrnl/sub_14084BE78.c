/*
 * XREFs of sub_14084BE78 @ 0x14084BE78
 * Callers:
 *     sub_140551D58 @ 0x140551D58 (sub_140551D58.c)
 *     sub_14084BDD8 @ 0x14084BDD8 (sub_14084BDD8.c)
 *     sub_140B219F0 @ 0x140B219F0 (sub_140B219F0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1403B670C @ 0x1403B670C (sub_1403B670C.c)
 *     sub_1403CF9A0 @ 0x1403CF9A0 (sub_1403CF9A0.c)
 *     sub_1403CFAC0 @ 0x1403CFAC0 (sub_1403CFAC0.c)
 *     sub_1403CFB04 @ 0x1403CFB04 (sub_1403CFB04.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14081C234 @ 0x14081C234 (sub_14081C234.c)
 */

char __fastcall sub_14084BE78(__int64 a1, __int128 *a2)
{
  __int64 v5; // rdx
  void *v6; // rcx
  __int64 v7; // rdx
  __int128 v8; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-30h] BYREF
  char v10; // [rsp+60h] [rbp-10h]
  __int16 v11; // [rsp+61h] [rbp-Fh]
  char v12; // [rsp+63h] [rbp-Dh]
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  LODWORD(Object) = 0;
  *(_QWORD *)&v8 = 0LL;
  DWORD2(v8) = 0;
  if ( !byte_140D00A88 && byte_140C0C6B9 )
  {
    sub_1403CF9A0(a1, &Object);
    if ( qword_140C54DC0 && qword_140D00A80 && byte_140C54DB8 || !(_DWORD)Object )
      return 1;
    if ( !qword_140C54DC0 && (int)sub_1403B670C() < 0 )
      return 0;
    if ( (int)sub_1403CFB04((__int64)&v8) < 0 )
      return 0;
    if ( (_BYTE)v8 )
    {
      if ( !qword_140C54E38 )
        return 0;
      v9[3] = *(_QWORD *)((char *)&v8 + 4);
      v10 = BYTE1(v8);
      v9[1] = sub_14055E720;
      v9[2] = sub_14055E560;
      v9[0] = 40LL;
      v11 = 0;
      v12 = 0;
      if ( (int)sub_14042A5E0(v9, v5) < 0 )
        return 0;
    }
    v8 = *a2;
    if ( (int)sub_14042A5E0(a1, &qword_140D00A80) >= 0 )
    {
      byte_140C54DB8 = 1;
      v6 = *(void **)(qword_140D00A80 + 1352);
      if ( !v6 )
      {
        if ( !a1 )
        {
LABEL_16:
          if ( *(_DWORD *)(qword_140D00A80 + 1336) == 6 && *(_QWORD *)(qword_140D00A80 + 8) )
          {
            if ( dword_140C0C6BC )
              sub_1403CFAC0();
          }
          return 1;
        }
        v6 = (void *)a1;
      }
      Object = 0LL;
      if ( ObReferenceObjectByHandle(v6, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
      {
        sub_14081C234((PFILE_OBJECT)Object, v7, (__int128 *)qword_140012A80);
        ObfDereferenceObject(Object);
      }
      goto LABEL_16;
    }
    qword_140D00A80 = 0LL;
  }
  return 0;
}
