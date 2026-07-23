/*
 * XREFs of sub_1409B08E8 @ 0x1409B08E8
 * Callers:
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 * Callees:
 *     sub_14020A400 @ 0x14020A400 (sub_14020A400.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     PsAssignProcessToJobObject @ 0x140688050 (PsAssignProcessToJobObject.c)
 *     sub_1407DE8D0 @ 0x1407DE8D0 (sub_1407DE8D0.c)
 *     sub_1409B00F8 @ 0x1409B00F8 (sub_1409B00F8.c)
 */

__int64 __fastcall sub_1409B08E8(char *Object, char a2, ULONG_PTR a3)
{
  char v4; // r14
  int v5; // ebx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rdi
  PVOID Objecta; // [rsp+68h] [rbp+20h] BYREF

  Objecta = 0LL;
  v4 = 0;
  v5 = sub_1407DE8D0(a3, 1, a2, 0x624A7350u, &Objecta);
  if ( v5 < 0 )
    goto LABEL_13;
  if ( _interlockedbittestandset((volatile signed __int32 *)Objecta + 30, 0) )
  {
    v5 = -1073741637;
LABEL_13:
    v7 = (volatile signed __int32 *)Objecta;
    goto LABEL_14;
  }
  v4 = 1;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  if ( sub_14020A400((__int64)Object)
    || *((_QWORD *)Object + 219)
    || *((char **)Object + 156) != Object + 1248
    || *((_DWORD *)Object + 54) )
  {
    v5 = -1073741637;
    goto LABEL_12;
  }
  v5 = sub_1409B00F8(v6, 1);
  if ( v5 < 0 )
  {
LABEL_12:
    ExReleaseResourceLite((PERESOURCE)(Object + 56));
    goto LABEL_13;
  }
  *((_QWORD *)Object + 219) = -1LL;
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
  v7 = (volatile signed __int32 *)Objecta;
  v5 = PsAssignProcessToJobObject(Object, *((_QWORD *)Objecta + 13), 0LL);
  if ( v5 >= 0 )
  {
    ObfReferenceObjectWithTag((PVOID)v7, 0x624A7350u);
    ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
    *((_QWORD *)Object + 219) = v7;
    *((_QWORD *)Object + 220) = Object;
    ExReleaseResourceLite((PERESOURCE)(Object + 56));
    v4 = 0;
    v5 = 0;
  }
LABEL_14:
  if ( v7 )
  {
    if ( *((_QWORD *)Object + 219) == -1LL )
      *((_QWORD *)Object + 219) = 0LL;
    if ( v4 )
    {
      _interlockedbittestandreset(v7 + 30, 0);
      v7 = (volatile signed __int32 *)Objecta;
    }
    sub_1403606C4((__int64)v7);
  }
  return (unsigned int)v5;
}
