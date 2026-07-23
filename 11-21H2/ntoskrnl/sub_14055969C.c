/*
 * XREFs of sub_14055969C @ 0x14055969C
 * Callers:
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     sub_1403B51A0 @ 0x1403B51A0 (sub_1403B51A0.c)
 *     sub_140A802F0 @ 0x140A802F0 (sub_140A802F0.c)
 *     sub_140A80ACC @ 0x140A80ACC (sub_140A80ACC.c)
 *     sub_140A80B3C @ 0x140A80B3C (sub_140A80B3C.c)
 * Callees:
 *     sub_14020C420 @ 0x14020C420 (sub_14020C420.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1403B51C4 @ 0x1403B51C4 (sub_1403B51C4.c)
 *     sub_140459D9C @ 0x140459D9C (sub_140459D9C.c)
 *     sub_140559AF8 @ 0x140559AF8 (sub_140559AF8.c)
 *     sub_140559BCC @ 0x140559BCC (sub_140559BCC.c)
 */

__int64 __fastcall sub_14055969C(PVOID Object, IRP *a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  _WORD *v7; // rcx
  unsigned __int32 v8; // ebx
  unsigned int v9; // ebp

  if ( (dword_140D018A0 & 2) != 0 && sub_140459D9C((__int64)a2, 1LL, a3) )
  {
    v7 = sub_14020C420((__int64)a2, 1, v5, v6);
    if ( v7 )
      *((_QWORD *)v7 + 5) = MEMORY[0xFFFFF78000000014];
  }
  if ( (dword_140D018A0 & 1) != 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v8 = _InterlockedIncrement(&dword_140C46CF0);
    sub_140559AF8(*((_QWORD *)Object + 1), a2, v8);
    v9 = sub_1403B51C4((__int64)Object, a2);
    sub_140559BCC(a2, v8);
    ObfDereferenceObject(Object);
  }
  else
  {
    return (unsigned int)sub_1403B51C4((__int64)Object, a2);
  }
  return v9;
}
