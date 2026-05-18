/*
 * XREFs of ?GetFormat@DeviceFrameBuffer@Engine@Spectre@@UEBA?AW4Format@23@XZ @ 0x180028950
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFormat@DeviceTexture@Engine@Spectre@@QEBA?AW4Format@23@XZ @ 0x1800566C4 (-GetFormat@DeviceTexture@Engine@Spectre@@QEBA-AW4Format@23@XZ.c)
 */

__int64 __fastcall Spectre::Engine::DeviceFrameBuffer::GetFormat(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
    return Spectre::Engine::DeviceTexture::GetFormat();
  return result;
}
