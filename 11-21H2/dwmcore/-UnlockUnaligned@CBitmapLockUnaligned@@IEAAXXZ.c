/*
 * XREFs of ?UnlockUnaligned@CBitmapLockUnaligned@@IEAAXXZ @ 0x180272100
 * Callers:
 *     ??1CBitmapLockUnaligned@@UEAA@XZ @ 0x180271D68 (--1CBitmapLockUnaligned@@UEAA@XZ.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?WriteUnalignedScanline@@YAXPEAEPEBEII@Z @ 0x180272194 (-WriteUnalignedScanline@@YAXPEAEPEBEII@Z.c)
 */

void __fastcall CBitmapLockUnaligned::UnlockUnaligned(CBitmapLockUnaligned *this)
{
  const unsigned __int8 *v1; // rdi
  unsigned __int8 *v3; // rcx
  unsigned __int8 *v4; // rsi
  unsigned int v5; // ebp

  v1 = (const unsigned __int8 *)*((_QWORD *)this + 14);
  v3 = (unsigned __int8 *)v1;
  if ( v1 )
  {
    if ( (*((_BYTE *)this + 128) & 2) != 0 )
    {
      v4 = (unsigned __int8 *)*((_QWORD *)this + 18);
      v5 = 0;
      if ( *((_DWORD *)this + 23) )
      {
        do
        {
          WriteUnalignedScanline(v4, v1, *((_DWORD *)this + 40), *((_DWORD *)this + 41));
          ++v5;
          v4 += *((unsigned int *)this + 38);
          v1 += *((unsigned int *)this + 24);
        }
        while ( v5 < *((_DWORD *)this + 23) );
        v3 = (unsigned __int8 *)*((_QWORD *)this + 14);
      }
    }
  }
  DefaultHeap::Free(v3);
  *((_QWORD *)this + 14) = 0LL;
}
